#include <stdio.h>

int reverse(int number) {
    int result = 0;
    while (number > 0) {
        result = result * 10 + number % 10;
        number = number / 10;
    }
    return result;
}

int main() {
    //test case 1
    int A1, B1;
    scanf("%d %d", &A1, &B1);
    A1 = reverse(A1);
    B1 = reverse(B1);
    int C1 = A1 + B1;
    printf("%d\n", reverse(C1));

    //test case 2
     int A2, B2;
    scanf("%d %d", &A2, &B2);
    A2 = reverse(A2);
    B2 = reverse(B2);
    int C2 = A2 + B2;
    printf("%d\n", reverse(C2));

    //test case 3
     int A3, B3;
    scanf("%d %d", &A3, &B3);
    A3 = reverse(A3);
    B3 = reverse(B3);
    int C3 = A3 + B3;
    printf("%d\n", reverse(C3));
    return 0;
}