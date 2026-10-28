def maximum(a, b):
    if b > a:
        return b
    return a

def minimum(a, b):
    if b < a:
        return b
    return a

#test case 1
total1 = int(input())
numbers1 = list(map(int, input().split()))
counter1 = 0
max1 = -100000
min1 = 100000
while counter1 < total1:
    value1 = numbers1[counter1]
    max1 = maximum(max1, value1)
    min1 = minimum(min1, value1)
    counter1 = counter1 + 1
print(str(max1) + " " + str(min1))

#test case 2
total2 = int(input())
numbers2 = list(map(int, input().split()))
counter2 = 0
max2 = -100000
min2 = 100000
while counter2 < total2:
    value2 = numbers2[counter2]
    max2 = maximum(max2, value2)
    min2 = minimum(min2, value2)
    counter2 = counter2 + 1
print(str(max2) + " " + str(min2))

#test case 3
total3 = int(input())
numbers3 = list(map(int, input().split()))
counter3 = 0
max3 = -100000
min3 = 100000
while counter3 < total3:
    value3 = numbers3[counter3]
    max3 = maximum(max3, value3)
    min3 = minimum(min3, value3)
    counter3 = counter3 + 1
print(str(max3) + " " + str(min3))