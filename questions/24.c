#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    for(; n > 0; n = n / 10) {
        rem = n % 10;
        sum += rem * rem * rem;
    }

    if(temp == sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}