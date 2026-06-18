#include<stdio.h>
int main(){
    int n=7,arr[]={1,2,3,4,5,6,7},delindex=5;
    for(int i=delindex;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("new arrays==");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
    return 0;
}