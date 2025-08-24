t = int(input())
results = []

for _ in range(t):
    n, k = map(int, input().split())
    lucky_value = 0
    start = 1
    end = n
    stack = [(start, end)] 
    print(stack)