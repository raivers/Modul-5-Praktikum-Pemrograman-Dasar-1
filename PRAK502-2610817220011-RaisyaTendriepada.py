def absolute(number):
    if number < 0:
        return -number
    return number

def calculate(value1, value2):
    return absolute(value1 - value2)

#test case 1
a1, c1, b1, d1 = map(int, input().split())
print(absolute(calculate(a1, b1) + calculate(c1, d1)))

#test case 2
a2, c2, b2, d2 = map(int, input().split())
print(absolute(calculate(a2, b2) + calculate(c2, d2)))

#test case 3
a3, c3, b3, d3 = map(int, input().split())
print(absolute(calculate(a3, b3) + calculate(c3, d3)))