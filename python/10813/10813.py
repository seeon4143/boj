import sys
input= sys.stdin.readline

N,M=map(int, input().split())
arr=[]

for i in range(N):
    arr.append(i+1)
for _ in range(M):
    i,j=map(int, input().split())
    temp=arr[i-1]
    arr[i-1]=arr[j-1]
    arr[j-1]=temp
print(*arr)