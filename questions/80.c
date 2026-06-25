#include <stdio.h>

int main() {
    int a[100], n, i;
    int maxSum, currentSum;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    maxSum = currentSum = a[0];

    for(i = 1; i < n; i++) {
        if(currentSum + a[i] > a[i])
            currentSum = currentSum + a[i];
        else
            currentSum = a[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum Subarray Sum = %d", maxSum);

    return 0;
}