#include <stdio.h>

void reverse() {
    char ch;

    scanf("%c", &ch);

    if(ch != '\n') {
        reverse();
        printf("%c", ch);
    }
}

int main() {
    printf("Enter sentence: ");
    reverse();

    return 0;
}