#include <stdio.h>

int main() {
    int a[100], n, d, i, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter positions to rotate: ");
    scanf("%d", &d);

    while(d--) {
        temp = a[0];

        for(i = 0; i < n - 1; i++)
            a[i] = a[i + 1];

        a[n - 1] = temp;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}