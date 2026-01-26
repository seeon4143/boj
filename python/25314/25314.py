N=int(input())

if N%4==0:
    for i in range(N//4):
        print("long", end=' ')
else:
    for i in range(N//4 +1):
        print("long",end=' ')
print("int")
    