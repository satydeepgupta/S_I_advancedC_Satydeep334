//QUESTION-4

#include <stdio.h>

int main() {
    int arr1[] = {10, 20};       
    int arr2[] = {30, 40, 50};   
    
    int n1 = 2; 
    int n2 = 3; 
    
 
    int mergedSize = n1 + n2;
    int mergedArr[mergedSize]; 
    
    
    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }
    
    
    for (int i = 0; i < n2; i++) {
    
        mergedArr[n1 + i] = arr2[i]; 
    }
    
    
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}
