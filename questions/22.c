#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        num = 1;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                num = 0;
                break;
            }
        }

        if(num)
            printf("%d ", i);
    }

    return 0;
}