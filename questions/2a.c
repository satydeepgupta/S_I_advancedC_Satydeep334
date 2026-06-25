#include <stdio.h>

int main() {
    float num;

    printf("Enter a float number: ");
    scanf("%f", &num);

    printf("You entered: %.2f", num);

    return 0;
}