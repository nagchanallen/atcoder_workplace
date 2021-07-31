import math
n = int(input())
have = False
i = 1
while pow(5,i) < n:
    j = 1
    while pow(3,j) <= (n - pow(5,i)):
        if pow(3,j) == (n - pow(5,i)):
            print(j,i)
            have = True
        j = j + 1
    i = i + 1
if (have == False):
    print('-1')