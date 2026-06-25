// all prime digit
#include<stdio.h>
int main(){
    int rem,i,num,isprime=1;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10){
        rem=i%10;
        if(!(rem==2||rem==3||rem==5||rem==7)){
            isprime=0;
            break;
        }
    }
    if(isprime)
    printf("all digit is prime =%d",num);
    else
    printf("all digits are not prime");
    return 0;
    

}