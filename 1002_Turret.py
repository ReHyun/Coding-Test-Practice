#터렛 문제 - 1002번
import math


arr = []

T = int(input())

for i in range(T):
    x1,y1,r1,x2,y2,r2 = input().split()
    x1 = int(x1)
    y1 = int(y1)
    r1 = int(r1)
    x2 = int(x2)
    y2 = int(y2)
    r2 = int(r2)

    distance = math.sqrt(((x2 - x1)**2) + ((y2 - y1)**2))

    if r1 > r2:
        r1, r2 = r2, r1

    if (x1==x2 and y1 == y2 and r1 == r2):
        count = -1
    elif (x1 == x2 and y1 == y2 and r1 != r2):
        count = 0
    elif ((distance + r1) < r2) or (distance > (r1 + r2)):
        count = 0
    elif (distance + r1 == r2) or (distance  == r1 + r2):
        count = 1
    else:
        count = 2
        
    arr.append(count)


for i in range(T):
    print(arr[i])




   
    
        

    
