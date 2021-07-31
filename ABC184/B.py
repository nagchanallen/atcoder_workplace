n, x = [int(x) for x in input().split(' ')]
s = input()

score = x
for i in s:
    if (i == 'o'):
        score += 1
    else:
        if (score > 0):
            score -= 1
print(score)
