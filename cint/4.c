//WAP to print product of all prime no in a given number
#include<stdio.h>
int main(){
int rem ,div=98765443 ,product=1;
for(int temp=div;temp>0;temp=temp/10){
    rem=temp%10;
    if(rem==2||rem==3||rem==5||rem==7){
         product=product*rem;
    }
}
printf("%d",product);
return 0;
}
