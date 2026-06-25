#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
// //Here’s the **logic of Bubble Sort** explained step by step:

// ---

// ### 🔎 Bubble Sort Logic
// 1. **Compare adjacent elements**  
//    - Start from the first element.  
//    - Compare it with the next one.  
//    - If the first is greater than the second, swap them.

// 2. **Repeat for the whole array**  
//    - After one full pass, the largest element will "bubble up" to the end.

// 3. **Reduce the range**  
//    - Next pass ignores the last element (since it’s already in place).  
//    - Continue until all elements are sorted.

// ---

// ### 🧮 Example Walkthrough
// Suppose the array is:  
// `[5, 2, 9, 1]`

// - **Pass 1:**  
//   Compare 5 & 2 → swap → `[2, 5, 9, 1]`  
//   Compare 5 & 9 → no swap → `[2, 5, 9, 1]`  
//   Compare 9 & 1 → swap → `[2, 5, 1, 9]`  
//   → Largest (9) is at the end.

// - **Pass 2:**  
//   Compare 2 & 5 → no swap → `[2, 5, 1, 9]`  
//   Compare 5 & 1 → swap → `[2, 1, 5, 9]`  
//   → Next largest (5) is in place.

// - **Pass 3:**  
//   Compare 2 & 1 → swap → `[1, 2, 5, 9]`  
//   → Sorted!

// ---

// ### ⏱ Complexity
// - Worst case: \(O(n^2)\)  
// - Best case (already sorted, with optimization): \(O(n)\)

// ---

// Would you like me to show you the **optimized version
//  of Bubble Sort code** (which stops early if no swaps happen),
//   so you don’t waste time on already sorted arrays?