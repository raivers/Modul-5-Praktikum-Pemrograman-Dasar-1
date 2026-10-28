#include <stdio.h>

int absolute(int number) {
    if (number < 0) {
        return -number;
    }
        return number;
}

int calculate(int value1, int value2) {
    return absolute(value1 - value2);
}

int main() {
    //test case 1
    int a1, b1, c1, d1;
    scanf("%d", &a1);
    scanf("%d", &c1);
    scanf("%d", &b1);
    scanf("%d", &d1);

    int Result1 = calculate(a1, b1) + calculate(c1, d1);
    printf("%d\n", absolute(Result1));

    //test case 2
    int a2, b2, c2, d2;
    scanf("%d", &a2);
    scanf("%d", &c2);
    scanf("%d", &b2);
    scanf("%d", &d2);

    int Result2 = calculate(a2, b2) + calculate(c2, d2);
    printf("%d\n", absolute(Result2));

    //test case 3
    int a3, b3, c3, d3;
    scanf("%d", &a3);
    scanf("%d", &c3);
    scanf("%d", &b3);
    scanf("%d", &d3);

    int Result3 = calculate(a3, b3) + calculate(c3, d3);
    printf("%d\n", absolute(Result3));
    return 0;
}