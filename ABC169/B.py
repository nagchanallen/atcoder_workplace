N = int(input())
A = [int(x) for x in input().split()]
p = 1
A.sort()
if (A[0] == 0):
    print(0)
    exit()
for a in A:
    p *= a
    if (p > pow(10, 18)):
        print(-1)
        exit()
print(p)