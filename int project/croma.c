#include <stdio.h>

struct Product {
    int Product_ID;
    int Product_Quantity;
};

int main() {
    struct Product inventory[5] = {
        {200, 10},
        {201, 15},
        {202, 8},
        {203, 12},
        {204, 5}
    };

    int choice;
    int size = sizeof(inventory) / sizeof(inventory[0]);

    do {
        printf("WELCOME\n");
        printf("1: View Inventory Stock\n");
        printf("2: Purchase Items\n");
        printf("3: Checkout & Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\tProduct_ID\tProduct_Quantity\n");
            for (int i = 0; i < size; i++) {
                printf("\t%d\t\t%d\n", inventory[i].Product_ID, inventory[i].Product_Quantity);
            }
        } 
        else if (choice == 2) {
            int id, qty, found = 0;
            printf("Enter Product ID: ");
            scanf("%d", &id);
            printf("Enter Quantity: ");
            scanf("%d", &qty);

            for (int i = 0; i < size; i++) {
                if (inventory[i].Product_ID == id) {
                    found = 1;
                    if (inventory[i].Product_Quantity >= qty) {
                        inventory[i].Product_Quantity -= qty;
                        printf("Purchase successful! Remaining stock: %d\n", inventory[i].Product_Quantity);
                    } else {
                        printf("Not enough stock! Available: %d\n", inventory[i].Product_Quantity);
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
