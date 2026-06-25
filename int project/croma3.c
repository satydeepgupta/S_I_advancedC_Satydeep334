#include <stdio.h>

struct Product {
    int Product_ID;
    char Product_Name[30];
    int Product_Quantity;
    float Product_MRP;
    float Discount;
};

struct CartItem {
    int Product_ID;
    char Product_Name[30];
    int Quantity;
    float Price;
    float Discount;
    float FinalAmount;
};

int main() {
    struct Product inventory[10] = {
        {200, "Laptop", 10, 55000.0, 10.0},
        {201, "Mobile", 15, 25000.0, 5.0},
        {202, "Television", 8, 40000.0, 12.0},
        {203, "Headphones", 12, 2000.0, 15.0},
        {204, "Refrigerator", 5, 30000.0, 8.0},
        {205, "Tablet", 12, 18000.0, 7.5},
        {206, "Smartwatch", 24, 8000.0, 10.0},
        {207, "Camera", 16, 35000.0, 6.0},
        {208, "Microwave", 32, 12000.0, 5.0},
        {209, "Speaker", 12, 5000.0, 20.0}
    };

    struct CartItem cart[50];
    int cartSize = 0;

    int choice;
    int size = sizeof(inventory) / sizeof(inventory[0]);

    do {
        printf("\nWELCOME TO CROMA\n");
        printf("1: View Inventory Stock\n");
        printf("2: Purchase Items\n");
        printf("3: Checkout & Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\tID\tName\t\tQty\tMRP\tDiscount(%%)\n");
            for (int i = 0; i < size; i++) {
                printf("\t%d\t%-12s\t%d\t%.2f\t%.1f%%\n", 
                       inventory[i].Product_ID, 
                       inventory[i].Product_Name, 
                       inventory[i].Product_Quantity, 
                       inventory[i].Product_MRP,
                       inventory[i].Discount);
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
                        float total = qty * inventory[i].Product_MRP;
                        float discountAmount = total * (inventory[i].Discount / 100.0);
                        float finalBill = total - discountAmount;

                        cart[cartSize].Product_ID = inventory[i].Product_ID;
                        snprintf(cart[cartSize].Product_Name, sizeof(cart[cartSize].Product_Name), "%s", inventory[i].Product_Name);
                        cart[cartSize].Quantity = qty;
                        cart[cartSize].Price = total;
                        cart[cartSize].Discount = discountAmount;
                        cart[cartSize].FinalAmount = finalBill;
                        cartSize++;

                        printf("Added to cart: %s (Qty: %d)\n", inventory[i].Product_Name, qty);
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
            printf("\n==== CHECKOUT SUMMARY ====\n");
            float grandTotal = 0, grandDiscount = 0, grandFinal = 0;
            printf("ID\tName\tQty\tPrice\tDiscount\tFinal\n");
            for (int i = 0; i < cartSize; i++) {
                printf("%d\t%-10s\t%d\t%.2f\t%.2f\t%.2f\n",
                       cart[i].Product_ID,
                       cart[i].Product_Name,
                       cart[i].Quantity,
                       cart[i].Price,
                       cart[i].Discount,
                       cart[i].FinalAmount);

                grandTotal += cart[i].Price;
                grandDiscount += cart[i].Discount;
                grandFinal += cart[i].FinalAmount;
            }
            printf("\n");
            printf("TOTAL: %.2f | DISCOUNT: %.2f | FINAL BILL: %.2f\n", grandTotal, grandDiscount, grandFinal);
            printf("Thank you for shopping at CROMA!\n");
        }
    } while (choice != 3);

    return 0;
}
