//write a logic to take input from user and check wherather the input contains 
//ALL EVEN DIGIT
#include <stdio.h>
int main() {
    int num, rem, i;
    int allEven = 1; 
    printf("Enter the number: ");
    scanf("%d", &num);
    for(i=num;i>0;i=i/10){
        rem=i%10;
       
        if(rem%2!=0){
            allEven=0;
            break;  
        }
   }
    if(allEven)
        printf("all num is even%d",num);
    else
        printf("all number is not even%d",num);
    return 0;
}
