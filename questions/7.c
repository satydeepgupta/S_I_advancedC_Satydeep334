#include <stdio.h>

int main() {
    float r, area, c;

    scanf("%f", &r);

    area = 3.14 * r * r;
    c = 2 * 3.14 * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f", c);

    return 0;
}