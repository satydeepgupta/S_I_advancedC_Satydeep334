//wap to print the sum of all the digit  which is divisible by 3.
#include<stdio.h>
int main(){
    int rem ,temp,sum=0;
    int div;
    printf("enter the number =");
    scanf("%d",&div);
    for(temp=div;temp>0;temp=temp/10){
        rem=temp%10;
        if(rem%3==0){
            printf("Number is divisible by 3=%d\n",rem);
        }

    }
   return 0;
}
