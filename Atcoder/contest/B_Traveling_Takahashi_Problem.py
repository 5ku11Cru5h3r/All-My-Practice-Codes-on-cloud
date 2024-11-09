import math
n=int(input())
dist=0.0
lastx=0.0
lasty=0.0
while n:
    x,y=input().split()
    x=int(x)
    y=int(y)
    dist=math.sqrt((x-lastx)**2+(y-lasty)**2)
    n-=1
print(dist)