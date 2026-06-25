#include <stdio.h>

int main() {
    int n, i, num= 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        num = 0;

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            num = 0;
            break;
        }
    }

    if(num)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}