#include <stdio.h>

int main() {
   int arr[] = {24, 8, 56, 12, 89, 3, 42};
    int size = sizeof(arr) / sizeof(arr[0]);


    int max = arr[0];
    int min = arr[0];


    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}
