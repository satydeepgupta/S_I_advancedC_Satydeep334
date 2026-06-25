//wap  to find odd digit in a given number
#include<stdio.h>
int main(){
    int rem ,div;
    printf("enter the no \n");
    scanf("%d",&div);
        for(int temp=div;temp>0;temp=temp/10){
        rem=temp%10;
        if(rem%2!=0){
            printf("odd digit %d\n",rem);
        }
    }
    return 0;
}
