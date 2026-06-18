#include <stdio.h>  
int main()
{   int i,j,k,count=0;

    int Arr[]={1,3,5,2,2};
    int n=5;
    for(int i=1;i<=n-1;i++){
        int sumLeft=0;
        int sumright=0;
     for (int j=i-1;j>=0;j--)
     {
        sumLeft+=Arr[j];
     }
     for(int k=i+1;k<=n-1;k++)
     {
        sumright+=Arr[k];
     }
     
     if(sumLeft==sumright)
     count++;
    }
     printf("eqb ind are:%d", count);
     return 0;
    }