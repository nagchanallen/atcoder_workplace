a, b, c = [int(x) for x in input().split(' ')]
result = ((100 - a) * a + (100 - b) * b + (100 - c) * c) / (a + b + c)
print("{:.9f}".format(round(result, 9)))
