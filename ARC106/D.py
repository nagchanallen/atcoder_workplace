n, k = [int(x) for x in input().split(' ')]
a = [int(y) for y in input().split()]
for x in range(1, (k + 1)):
    sum = 0
    for u in range(0, (n - 1)):
        for v in range((u + 1), n):
            sum = sum + pow((a[u] + a[v]), x)
            sum = sum % 998244353
    print(sum)
