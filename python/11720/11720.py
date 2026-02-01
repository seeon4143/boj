import sys
input=sys.stdin.readline

N=int(input())
total=0
s=input().strip()
for i in s:
    total += int(i)
print(total)
    