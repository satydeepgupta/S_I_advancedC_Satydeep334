#include <stdio.h>

int main() {
    int productIDs[5] = {200, 201, 202, 203, 204};
    int productQty[5] = {10, 15, 8, 12, 5};

    int choice;
    int size = 5;

    do {
        printf("WELCOME TO CROMA\n");
        printf("1: View Inventory Stock\n");
        printf("2: Purchase Items\n");
        printf("3: Checkout & Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\tProduct_ID\tProduct_Quantity\n");
            for (int i = 0; i < size; i++) {
                printf("\t%d\t\t%d\n", productIDs[i], productQty[i]);
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
                        printf("Purchase successful Remaining stock: %d\n", productQty[i]);
                    } else {
                        printf("Not enough stock Available: %d\n", productQty[i]);
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
