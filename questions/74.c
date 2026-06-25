#include <stdio.h>

int main() {
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", *p1 + *p2);

    return 0;
}