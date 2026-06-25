//palindrome
#include<stdio.h>
int main(){
    int rem,rev=0,num,i;
    printf("enter the number =");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10){
        rem=i%10;
        rev=rev*10+rem;}
        if(num==rev){
            printf("number is pelindrome ");
        }
        else {
            printf("no");
            
          }
    return 0;
   }