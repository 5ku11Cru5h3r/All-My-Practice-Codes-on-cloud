#flag format : H7CTF{}
#[322523242873603806320271688401855976049516951601789533025598430538786029449943176134846359031111424671799, 300125795451825764214697265596171533268300496629443037676598539529148110738141566681037584098395353514068, 313564263904892589478041919279582198937030369612850934885998474134930861965222532353322849058024996208763, 232933453186491637897973997179118204924651131712403551629598866500234354602736738319611259300247140040806, 223974474217780421055744228056844427812164549723464953489998910096379187118016094538087749327160711577697, 215015495249069204213514458934570650699677967734526355350398953692524019633295450756564239354074283114550, 443469458951205233690373571552551967068085808452460607910197841990830790493671867185413743667778208923745, 215015495249069204213514458934570650699677967734526355350398953692524019633295450756564239354074283114595, 219494984733424812634629343495707539255921258728995654420198931894451603375655772647325994340617497346149, 246371921639558463161318650862528870593381004695811448838998801106017105829817703991896524259876782735457, 237412942670847246319088881740255093480894422706872850699398844702161938345097060210373014286790354272312, 232933453186491637897973997179118204924651131712403551629598866500234354602736738319611259300247140040806, 246371921639558463161318650862528870593381004695811448838998801106017105829817703991896524259876782735458, 241892432155202854740203766301391982037137713701342149769198822904089522087457382101134769273333568503908, 456907927404272058953718225235962632736815681435868505119597776596613541720752832857699008627407851618352, 215015495249069204213514458934570650699677967734526355350398953692524019633295450756564239354074283114550, 250851411123914071582433535423665759149624295690280747908798779307944689572178025882658279246419996966964, 438989969466849625269258686991415078511842517457991308840397863788903206751311545294651988681234994692194, 255330900608269680003548419984802647705867586684750046978598757509872273314538347773420034232963211198513, 559936185544451052639360570142111069530411374308662383724997275240947967795040236345219373317901778944042]

# flag = "REDACTED"
# c = int(input("Enter a number: "))
# if len(flag) % 2:
#     flag += "*"
# m = []
# for i in range(0, len(flag), 2):
#     a, b = ord(flag[i]), ord(flag[i + 1])
#     m.append((a << c) + b)

# print(m)

arr=[322523242873603806320271688401855976049516951601789533025598430538786029449943176134846359031111424671799, 300125795451825764214697265596171533268300496629443037676598539529148110738141566681037584098395353514068, 313564263904892589478041919279582198937030369612850934885998474134930861965222532353322849058024996208763, 232933453186491637897973997179118204924651131712403551629598866500234354602736738319611259300247140040806, 223974474217780421055744228056844427812164549723464953489998910096379187118016094538087749327160711577697, 215015495249069204213514458934570650699677967734526355350398953692524019633295450756564239354074283114550, 443469458951205233690373571552551967068085808452460607910197841990830790493671867185413743667778208923745, 215015495249069204213514458934570650699677967734526355350398953692524019633295450756564239354074283114595, 219494984733424812634629343495707539255921258728995654420198931894451603375655772647325994340617497346149, 246371921639558463161318650862528870593381004695811448838998801106017105829817703991896524259876782735457, 237412942670847246319088881740255093480894422706872850699398844702161938345097060210373014286790354272312, 232933453186491637897973997179118204924651131712403551629598866500234354602736738319611259300247140040806, 246371921639558463161318650862528870593381004695811448838998801106017105829817703991896524259876782735458, 241892432155202854740203766301391982037137713701342149769198822904089522087457382101134769273333568503908, 456907927404272058953718225235962632736815681435868505119597776596613541720752832857699008627407851618352, 215015495249069204213514458934570650699677967734526355350398953692524019633295450756564239354074283114550, 250851411123914071582433535423665759149624295690280747908798779307944689572178025882658279246419996966964, 438989969466849625269258686991415078511842517457991308840397863788903206751311545294651988681234994692194, 255330900608269680003548419984802647705867586684750046978598757509872273314538347773420034232963211198513, 559936185544451052639360570142111069530411374308662383724997275240947967795040236345219373317901778944042]
c=341
# for i in range(340,350,1):
            # print(str(i)+":"+str(len(str(42<<i)))+"> "+str(42<<i))
for i in range(len(arr)):
    a=bin(arr[i])[2:9]
    b=bin(arr[i])[-1:-8:-1][::-1]
    print(chr(int(a,2))+chr(int(b,2)),end='')
    # print("-----------OUTPUT------------")
    # print(bin(arr[i]))