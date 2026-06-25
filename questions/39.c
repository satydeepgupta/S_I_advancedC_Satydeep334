#include <stdio.h>

int main() {
    int a[100], n, i, pos, value;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &value);

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}