#include<stdio.h> 
 
int main() { 
    int count = 0; 
    int num = 100; // Starting from 3-digit numbers to have middle digits 
    int sumOfXylem = 0; 
     
    printf("The first 15 Xylem numbers are:\n"); 
     
    while (count < 15) { 
        int temp = num; 
        int extreme_sum = 0; 
        int mean_sum = 0; 
         
        // 1. Extract the last digit (first extreme) 
        extreme_sum += temp % 10; 
        temp /= 10; 
         
        // 2. Loop to sum up all the middle (mean) digits 
        while (temp > 9) { 
            mean_sum += temp % 10; 
            temp /= 10; 
        } 
         
        // 3. The last remaining digit is the first digit (second extreme) 
        extreme_sum += temp; 
         
        // 4. Check if extreme sum equals mean sum 
        if (extreme_sum == mean_sum) { 
            printf("%d ", num); 
            sumOfXylem += num; 
            count++; 
        } 
        num++; 
    } 
    
     
    printf("\n\nSum of the first 15 Xylem numbers: %d\n", sumOfXylem); 
    return 0; 
} 
 
