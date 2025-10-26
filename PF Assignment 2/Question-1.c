#include <stdio.h>
#include <string.h>
void Display();
void addnewBook(int isbns[100], char title[100][50], float price[100], int quantities[100], int *bookcount);
void processSale(int isbns[100], int quantities[100], int bookcount);
void lowstockreport(int isbns[100], char title[100][50], int qunatities[100], int bookcount);
int findbook(int isbns[100], int bookcount, int isbn);

int main()
{
    int choice;
    int isbns[100];
    char title[100][50];
    float price[100];
    int quantities[100];
    int bookcount = 0;
    while (choice != 4)
    {
        Display();
        printf("Enter Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addnewBook(isbns, title, price, quantities, &bookcount);
            break;
        case 2:
            processSale(isbns, quantities, bookcount);
            break;
        case 3:
            lowstockreport(isbns, title, quantities, bookcount);
            break;
        case 4:
            printf("Exiting Program....");
            break;
        default:
            printf("Invalid Choice!!");
        }
    }
    return 0;
}
void Display()
{
    printf("====LIBERTY BOOKS====\n");
    printf("1.Add New Book\n");
    printf("2.Process a Sale\n");
    printf("3.Generate Low Stock Report\n");
    printf("4.Exit\n");
}

void addnewBook(int isbns[100], char title[100][50], float price[100], int quantities[100], int *bookcount)
{
    if (*bookcount >= 100)
    {
        printf("Inentory is already full.You can't add a new book.\n");
        return;
    }
    int isbn;
    printf("Enter ISBN:");
    scanf("%d", &isbn);
    if ((findbook(isbns, *bookcount, isbn)) != -1)
    {
        printf("The Book with this isbn already exist!\n");
        return;
    }
    isbns[*bookcount] = isbn;
    printf("Enter Title Of Book:");
    scanf(" %[^\n]", title[*bookcount]);
    printf("Enter Price:");
    scanf("%f", &price[*bookcount]);

    printf("Enter Quantity Of Books:");
    scanf("%d", &quantities[*bookcount]);
    printf("Book Added Successfully. Thank You!\n");
    (*bookcount)++;
}
void processSale(int isbns[100], int quantities[100], int bookcount)
{
    int isbn, soldquantity;
    printf("Enter ISBN :");
    scanf("%d", &isbn);
    int i = findbook(isbns, bookcount, isbn);
    if (i == -1)
    {
        printf("Book not Found!\n");
        return;
    }
    printf("Enter Quantity:");
    scanf("%d", &soldquantity);
    if (quantities[i] < soldquantity)
    {
        printf("Not Enough Stock.Only %d Stock is Available\n", quantities[i]);
        return;
    }
    else
    {
        quantities[i] -= soldquantity;
        printf("Sale Processed. Remaining Stock is %d\n", quantities[i]);
    }
}
void lowstockreport(int isbns[100], char title[100][50], int qunatities[100], int bookcount)
{
    int found = 0;
    for (int i = 0; i < bookcount; i++)
    {
        if (qunatities[i] < 5)
        {
            printf("ISBN = %d, Title = %s,Quantity = %d\n", isbns[i], title[i], qunatities[i]);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Enough Stock!\n");
    }
}
int findbook(int isbns[100], int bookcount, int isbn)
{
    for (int i = 0; i < bookcount; i++)
    {
        if (isbns[i] == isbn)
        {
            return i;
        }
    }
    return -1;
}
