import sys
input=sys.stdin.readline

while(1):
    line = input()
    if not line:
        break
    A,B=map(int,input().split())
    if A==None and B==None:
        break
    print(A+B)