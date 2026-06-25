//fibonaaci
#include<stdio.h>
int main(){
    int rem ,num,i,n1=0,n2=1,n3;
    for(i=2;i<61;i++){
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
        if(i==60)
        printf("%d\n",n3);

    }
    return 0;
}