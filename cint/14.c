#include <stdio.h>

int main() {
    int num, temp, digit, sum_extreme = 0, sum_mean = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    for (num=temp; temp > 0; temp /= 10) {
        count++;
    }

    temp = num;

    for (int i = count; i > 0; i--) {
        digit = temp % 10;

        if (i == count || i == 1) {
            sum_extreme += digit;
        } else {
            sum_mean += digit;
        }

        temp /= 10;
    }
    if (sum_extreme == sum_mean) {
        printf("%d is a Xylem number.\n", num);
    } else {
        printf("%d is not a Xylem number.\n", num);
    }

    return 0;
}
