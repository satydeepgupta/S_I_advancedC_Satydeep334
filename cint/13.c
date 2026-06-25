//neon
#include<stdio.h>
int main(){
    int rem,num=59,i,sum=0,square;
    square=num*num;
    for(i=square;i>0;i=i/10){
        rem=i%10;
        sum=sum+rem;
    }
    if(num==sum){
        printf("number is neon%d",num);
    }
    else{
        printf("number is not neon");  
    }
    return 0;
    
}