#include <stdio.h>

int MaxNumber (int a, int b, int c, int d) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;
    return m;
}

int main() {
    //test case 1
    int a1, b1, c1, d1;
    scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
    int result1 = MaxNumber(a1, b1, c1, d1);
    printf("%d\n", result1);

    //test case 2
    int a2, b2, c2, d2;
    scanf("%d %d %d %d", &a2, &b2, &c2, &d2);
    int result2 = MaxNumber(a2, b2, c2, d2);
    printf("%d\n", result2);

    //test case 3
    int a3, b3, c3, d3;
    scanf("%d %d %d %d", &a3, &b3, &c3, &d3);
    int result3 = MaxNumber(a3, b3, c3, d3);
    printf("%d\n", result3);
    return 0;
}