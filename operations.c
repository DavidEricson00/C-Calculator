#include <stdio.h>
#include "calculator.h"

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

void input(int *a, int *b) {
    printf("Insert the first value: ");
    scanf("%d", a);
    printf("Insert the second value: ");
    scanf("%d", b);
}
