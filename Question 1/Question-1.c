#include<stdio.h>
#include<string.h>
int main(){
    int transaction_no;
    int transaction_amount;
    char country[40];

    printf("Enter the Transaction no in an hour:\t");
    scanf("%d",&transaction_no);
    if(transaction_no > 3){
        printf("Suspicious Transaction(More Transaction than usual in an hour)");
    }else {
        printf("Enter Transaction Country:");
        scanf(" %s",country);
    }
     if((strcmp(country,"Pakistan") && strcmp(country,"UAE"))!=0){
        printf("Suspicious Transaction(Unusual Country)");
    }else {
         printf("Enter Transaction Amount:");
    scanf("%d",&transaction_amount);
    }
       if(transaction_amount > 5000){
        printf("Suspicious Transaction(More than usual transaction amount)");
    }
    else{
        printf("Normal Transaction");
    }
    return 0;
}