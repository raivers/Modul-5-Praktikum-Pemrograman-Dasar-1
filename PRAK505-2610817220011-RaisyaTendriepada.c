#include <stdio.h>

void Profile(int birth_year, char name[], char origin[]) {
    int current_year = 2020;
    int age = current_year - birth_year;
    printf("My Name Is : %s\n", name);
    printf("My Age : %d\n", age);
    printf("My Batch Year Is : %d\n", current_year);
    printf("I Am From : %s\n", origin);
}

int main() {
    //test case 1
    int birthYear1;
    char A1[20], B1[15];
    scanf(" %d", &birthYear1);
    scanf(" %[^\n]", A1);
    scanf(" %[^\n]", B1);
    Profile(birthYear1, A1, B1);

    //test case 2
    int birthYear2;
    char A2[20], B2[15];
    scanf(" %d", &birthYear2);
    scanf(" %[^\n]", A2);
    scanf(" %[^\n]", B2);
    Profile(birthYear2, A2, B2);
    return 0;
}