//QUESTION-5

#include <stdio.h>

int main() {
    int arr[] = {4, 2, 4, 7, 2};
    int n = 5;                  
    
    
    int visited[5] = {0, 0, 0, 0, 0}; 

    printf("Duplicate elements: ");

    
    for (int i = 0; i < n; i++) {
        
        
        if (visited[i] == 1) continue;

        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                visited[j] = 1; 
                break;          
            }
        }
    }

    return 0;
}