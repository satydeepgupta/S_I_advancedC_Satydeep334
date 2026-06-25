// /wap to print all the number between 1 to 10000 which comes under
//  the category of whichmsatisfy the condition that  in it contain 
// equal no of digit equal no of even digit and equal of prime digit
#include<stdio.h>
int main (){
    int rem,i,num,even ,odd, prime;
    for(num=1;num<=10000;num++){
        odd=even=prime=0;
        for(i=num;i>0;i=i/10){
            rem=i%10;
            if(rem%2==0)
            even++;
            else
            odd++;
            if(rem==2||rem==3||rem==5||rem==7)
            prime++;


            
        }
        if(odd==even&even==prime){
            printf("%d\n",num);
        }
    }
    return 0;

}