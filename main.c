#include <stdio.h>
#include "calculator.h"

int main() {
    int option = 6, x, y;

    while (option != 5) {
        header();
        menu();
        printf("Enter the desired option: ");
        scanf("%d", &option);

        if (option == 1) {
            line();
            input(&x, &y);
            printf("Addition result: %d\n", addition(x, y));
        } 
        else if (option == 2) {
            line();
            input(&x, &y);
            printf("Subtraction result: %d\n", subtraction(x, y));
        } 
        else if (option == 3) {
            line();
            input(&x, &y);
            printf("Multiplication result: %d\n", multiplication(x, y));
        } 
        else if (option == 4) {
            line();
            input(&x, &y);
            if (y != 0) {
                printf("Division result: %.2f\n", division((float)x, (float)y));
            } else {
                printf("Error: Division by zero!\n");
            }
        } 
        else if (option == 5) {
            printf("Exiting...\n");
        } 
        else {
            printf("Invalid option, please try again.\n");
        }
    }

    return 0;
}