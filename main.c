#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void billDesign(char name[50], char date[40]);
void printBill(char item[50], int qty, float price);
void generateBill(float total);

struct restaurant
{
    char name[40];
    char item[50];
    int noOfItems;
    int chargePerItem;
    int qty;
    float totPrice;
};

int main()
{
    float total;
    int ord;
    struct restaurant r1[40];
    printf("\n\t\t********** Unife Restaurant **********\n\n");
    printf("Enter the customer name: ");
    scanf("%s", r1->name);
    printf("Enter the number of orders: ");
    scanf("%d", &ord);

    for(int i = 0; i < ord; i++)
    {
        printf("\nEnter item %d: ", i + 1);
        scanf("%s", r1[i].item);
        printf("Enter quantity of %s: ", r1[i].item);
        scanf("%d", &r1[i].noOfItems);
        printf("Enter the charge per item: ");
        scanf("%d", &r1[i].chargePerItem);

        total += r1[i].noOfItems * r1[i].chargePerItem;
    }

    system("cls");

    billDesign(r1->name, "08/06/2024");

    for(int i = 0; i < r1->noOfItems; i++)
    {
        printBill(r1[i].item, r1[i].noOfItems, r1[i].chargePerItem);
    }
    generateBill(total);

    printf("\n\n");

    return 0;

}

void billDesign(char name[50], char date[40])
{
    printf("\n********** Unife Restaurant **********\n");
    printf("--------------------------------------\n");
    printf("Date:\t\t %s\n", date);
    printf("Invoice To:\t %s\n\n", name);
    printf("--------------------------------------\n");
    printf("Items\t\tQty\tPrice\tTotal\n\n");
    printf("--------------------------------------\n");
}

void printBill(char item[50], int qty, float price)
{
    printf("%s\t", item);
    printf("\t%d", qty);
    printf("\t%.2f", price);
    printf("\t%.2f\t", qty*price);
    printf("\n");
}

void generateBill(float total)
{
    printf("\n");
    float iva = 0.07 * total;
    printf("--------------------------------------\n");
    printf("TOTALE COMPLESSIVO\t %0.2f", total);
    printf("\nDi cui IVA\t\t %0.2f", iva);
}

