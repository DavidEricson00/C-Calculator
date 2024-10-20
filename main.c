#include <stdio.h>

int main() {
    int option;

    printf("Enter the desired option: ");
    scanf("%d", &option);

    while (option != 0) {
        printf("While Working\n");
        printf("Enter the desired option: ");
        scanf("%d", &option);
    }

    return 0;
}
