def reverse(number):
    result = 0
    while number > 0:
        result = result * 10 + number % 10
        number = number // 10
    return result

#test case 1
A1, B1 = map(int, input().split())
A1 = reverse(A1)
B1 = reverse(B1)
C1 = A1 + B1
print(reverse(C1))

#test case 2
A2, B2 = map(int, input().split())
A2 = reverse(A2)
B2 = reverse(B2)
C2 = A2 + B2
print(reverse(C2))

#test case 3
A3, B3 = map(int, input().split())
A3 = reverse(A3)
B3 = reverse(B3)
C3 = A3 + B3
print(reverse(C3))