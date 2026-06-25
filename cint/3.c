//wap to find prime digit in a number
#include<stdio.h>
int main(){
    int div ,rem;
    printf("enter ur number==");
    scanf("%d",&div);
    for(int temp=div;temp>0;temp=temp/10){
        rem=temp%10;
        if(rem==2||rem==3||rem==5||rem==7){
            printf("nuber is prime=%d\n",rem);
        }
    }
    return 0;
}