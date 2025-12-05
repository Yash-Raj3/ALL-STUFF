#include <stdio.h>
int main()
{
    int item_code, price, quantity;
    printf("Enter Item Code: ");
    scanf("%d", &item_code);
    switch (item_code)
    {
    case 1:
        price = 300;
        printf("Enter the number of items: ");
        scanf("%d", &quantity);
        break;
    case 2:
        price = 500;
        printf("Enter the number of items: ");
        scanf("%d", &quantity);
        break;
    case 3:
        price = 100;
        printf("Enter the number of items: ");
        scanf("%d", &quantity);
        break;
    }
    int total_bill = price * quantity;
    int own;
    printf("%d is The bill. How much do you have ? : ", total_bill);
    scanf("%d", &own);
    if (own >= total_bill)
    {
        int remain = own - total_bill;
        printf("Here is Your Change %d", remain);
    }
    else if (own < total_bill)
    {
        printf("Not Enough Money! You Have to pay %d", total_bill - own);
    }
    return 0;
}