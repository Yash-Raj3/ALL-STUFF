
#include<stdio.h>
#include<string.h>
int main(){
    int transaction_no;
    int transaction_amount;
    char country[40];

    printf("Enter the Transaction no in an hour:\t");
    scanf("%d",&transaction_no);

    printf("Enter Transaction Country:\t");
    scanf("%s",country);

    printf("Enter Transaction Amount:\t");
    scanf("%d",&transaction_amount);

    if(transaction_no > 3){
        printf("Suspicious Transaction(More Transactions than usual)");
    }
    else if((strcmp(country,"Pakistan") && strcmp(country,"UAE"))!=0){
        printf("Suspicious Transaction(Unusual Country)");
    }
    else if(transaction_amount > 5000){
        printf("Suspicious Transaction(More Transaction Amount than Usual)");
    }
    else{
        printf("Normal Transaction");
    }
    return 0;
}
