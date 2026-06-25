#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n > 0; n = n / 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }

    printf("Reverse = %d", rev);

    return 0;
}