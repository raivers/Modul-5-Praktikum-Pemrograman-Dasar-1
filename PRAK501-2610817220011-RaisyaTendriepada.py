def MaxNumber(a, b, c, d):
    m = a
    if (b > m): m = b
    if (c > m): m = c
    if (d > m): m = d
    return m

#test case 1
a1, b1, c1, d1 = map(int, input().split())
print(MaxNumber(a1, b1, c1, d1))

#test case 2
a2, b2, c2, d2 = map(int, input().split())
print(MaxNumber(a2, b2, c2, d2))

#test case 3
a3, b3, c3, d3 = map(int, input().split())
print(MaxNumber(a3, b3, c3, d3))