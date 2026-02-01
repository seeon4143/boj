import sys
input = sys.stdin.readline

arr=[0]*42

for i in range(10):
    n=int(input())
    if arr[n%42]==0:
        arr[n%42]+=1

sum=0        

for _ in arr:
    if _ == 1:
        sum+=1
print(sum)