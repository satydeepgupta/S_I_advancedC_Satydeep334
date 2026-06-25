#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    for(; n > 0; n = n / 10) {
        rem = n % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
    }

    if(temp == sum)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}