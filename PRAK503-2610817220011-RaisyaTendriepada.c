#include <stdio.h>

int maximum(int a, int b) {
    if (b > a) {
        return b;
    }
    return a;
}

int minimum(int a, int b) {
    if (b < a) {
        return b;
    }
    return a;
}

int main()  {
    //test case 1
    int counter1 = 0;
    int max1 = -100000;
    int min1 = 100000;
    int total1;
    scanf("%d", &total1);
    while (counter1 < total1) {
        int value1;
        scanf("%d", &value1);
        max1 = maximum(max1, value1);
        min1 = minimum(min1, value1);
        counter1++;
    }
    printf("%d %d\n", max1, min1);

    //test case 2
    int counter2 = 0;
    int max2 = -100000;
    int min2 = 100000;
    int total2;
    scanf ("%d", &total2);
    while (counter2 < total2) {
        int value2;
        scanf("%d", &value2);
        max2 = maximum(max2, value2);
        min2 = minimum(min2, value2);
        counter2++;
    }
    printf("%d %d\n", max2, min2);

    //test case 3
    int counter3 = 0;
    int max3 = -100000;
    int min3 = 100000;
    int total3;
    scanf ("%d", &total3);
    while (counter3 < total3) {
        int value3;
        scanf("%d", &value3);
        max3 = maximum(max3, value3);
        min3 = minimum(min3, value3);
        counter3++;
    }
    printf("%d %d\n", max3, min3);
    return 0;
}