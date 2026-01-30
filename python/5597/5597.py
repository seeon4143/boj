import sys
input=sys.stdin.readline

arr=list(range(1,31))

for i in range(28):
    n=int(input())
    arr[n-1]=0

for x in arr:
    if x!=0:
        print(x)