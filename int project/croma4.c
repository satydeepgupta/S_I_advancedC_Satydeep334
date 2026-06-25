#include <stdio.h>

int main() {
    int productIDs[10] = {200, 201, 202, 203, 204, 205, 206, 207, 208, 209};
    char productNames[10][30] = {
        "Laptop", "Mobile", "Television", "Headphones", "Refrigerator",
        "Tablet", "Smartwatch", "Camera", "Microwave", "Speaker"
    };
    int productQty[10] = {10, 15, 8, 12, 5, 12, 24, 16, 32, 12};
    float productMRP[10] = {55000.0, 25000.0, 40000.0, 2000.0, 30000.0,
                            18000.0, 8000.0, 35000.0, 12000.0, 5000.0};

    int choice;
    int size = 10;

    do {
        printf("\n==== WELCOME TO CROMA ====\n");
        printf("1: View Inventory Stock\n");
        printf("2: Purchase Items\n");
        printf("3: Checkout & Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\tID\tName\t\tQty\tMRP\n");
            for (int i = 0; i < size; i++) {
                printf("\t%d\t%-12s\t%d\t%.2f\n",
                       productIDs[i],
                       productNames[i],
                       productQty[i],
                       productMRP[i]);
            }
        } 
        else if (choice == 2) {
            int id, qty, found = 0;
            printf("Enter Product ID: ");
            scanf("%d", &id);
            printf("Enter Quantity: ");
            scanf("%d", &qty);

            for (int i = 0; i < size; i++) {
                if (productIDs[i] == id) {
                    found = 1;
                    if (productQty[i] >= qty) {
                        productQty[i] -= qty;
                        float total = qty * productMRP[i];
                        printf("Purchase successful! Remaining stock: %d\n", productQty[i]);
                        printf("Total Bill: %.2f\n", total);
                    } else {
                        printf("Not enough stock! Available: %d\n", productQty[i]);
                    }
                    break;
                }
            }
            if (!found) {
                printf("Product ID not found!\n");
            }
        }
        else if (choice == 3) {
            printf("Thank you for shopping at CROMA!\n");
        }
    } while (choice != 3);

    return 0;
}
