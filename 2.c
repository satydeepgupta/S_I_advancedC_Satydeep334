#include<stdio.h>
int main(){
    int i ,n=6,temp;
    int arr[]={2,3,4,5,6,7};
    for(i=0;i<n;i++){
        
       
        temp=arr[i];
         arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
     printf("rev array is=");
     for(i=0;i<n;i++){
        printf("%d ", arr[n-i-1]);
     }
     return 0;
}