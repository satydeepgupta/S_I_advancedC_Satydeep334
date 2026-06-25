// all odd digit 
#include<stdio.h>
int main(){
    int rem,i,num,oddno =1;
    printf("print the number=");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10){
        rem=i%10;
    
        if(rem%2==0){
            oddno=0;
            break;
        }
    }
    if(oddno)
    printf("number is odd%d",num);
    else{
        printf("number is not odd%d",num);
    }
    return 0;
}