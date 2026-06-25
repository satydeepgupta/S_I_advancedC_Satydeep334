//wap to print  reverse of the given no.
#include<stdio.h>
int main(){
    int div,rem,i,rev=0;
    printf("Enter the number");
    scanf("%d",&div);
    for(i=div;i>0;i=i/10){
        rem=i%10;
        rev=rev*10+rem;
        

        }
    
    
    printf(" reverse no %d",rev);
    return 0;
}