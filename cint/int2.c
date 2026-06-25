#include<stdio.h>
int main() {
    int a[5];
    int rev = 0, rem, count = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter element in an array\n");
        scanf("%d",&a[i]);
        for ( int j = 0;j < 5; j++) {
            rev = 0;
            for(int temp = a[j]; temp > 0; j++) {
                rem = temp % 10;
                rev = rev*10 + rem;
            } 
            if ( rev == a[j]) {
                count++;
            }
            if (count >= 1) {
                printf("array consist atleast one palindrome number");
                break;
            }
        }
    }
    return 0;
}