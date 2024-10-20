
#include <stdio.h>
#include "util.h"

int main() {
    int option = 6;

    while (option != 5) {
        header();
        menu();
        printf("Enter the desired option: ");
        scanf("%d", &option);
    }

    printf("Exiting...\n");
    return 0;
}

// .\calculator
// ctr + shift + b autocompile