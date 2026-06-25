#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    for(; n > 0; n = n / 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}