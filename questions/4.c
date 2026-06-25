#include <stdio.h>

int main() {
    int a, b;

    printf("Enter numbers ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
return 0;
}