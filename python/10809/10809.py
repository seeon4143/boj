import sys

input=sys.stdin.readline

S=input().strip()

arr=[-1]*26

for i in range(len(S)):
    idx= ord(S[i])-ord('a')
    if arr[idx]== -1:
        arr[idx]=i
print(*arr)