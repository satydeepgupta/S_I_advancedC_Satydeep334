#include <stdio.h>

int main() {
    int n, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n > 0; n = n / 10) {
        rem = n % 10;
        sum += rem;
    }

    printf("Sum = %d", sum);

    return 0;
}