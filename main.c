#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bill(char name[50], char date[40]);

int main()
{
    bill("aziz", "12/12/2020");
}

void bill(char name[50], char date[40])
{
    printf("\n********** Unife Restaurant **********\n");
    printf("--------------------------------------\n");
    printf("Date:\t\t %s\n", date);
    printf("Invoice To:\t %s\n\n", name);
    printf("--------------------------------------\n");
    printf("Items\t\tQty\tPrice\tTotal\n\n");
    printf("--------------------------------------\n");

}