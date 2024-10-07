from Crypto.PublicKey import RSA
from Crypto.Util.number import getPrime, bytes_to_long, long_to_bytes
import gmpy2

# Open the flag file in binary read mode
with open("flag.txt", 'rb') as flag_file:
    p = getPrime(128)
    print(p)
    q = getPrime(128)
    print(q)
    n = p * q
    e = 65537
    phi = (p - 1) * (q - 1)
    d = gmpy2.invert(e, phi)
    
    message = bytes_to_long(flag_file.read())

    ciphertext = pow(message, e, n)
    ciphertext = long_to_bytes(ciphertext).hex()  # Convert bytes to hex string

# Write encrypted message to file
with open("flag.enc", 'w') as encrypt_file:
    encrypt_file.write("ciphertext: \n" + ciphertext)

# Write public key to file
with open("pubkey.pem", 'wb') as pubkey_file:
    pubkey = RSA.construct((n, e))
    pubkey_file.write(pubkey.export_key('PEM'))
