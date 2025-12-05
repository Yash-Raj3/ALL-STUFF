#include<stdio.h>
int main(){
char item;
int qunatity;
float price;
float bill;
float discount;
float total_bill;
printf("P.Pizza\nB.Burger\nI.Ice cream\nC.Chips\n");
scanf(" %c",&item);
switch (item)
{
case 'P':printf("How many do you want: ");
scanf("%d",&qunatity);
price = 375;
break;
case 'B':printf("How many do you want: ");
scanf("%d",&qunatity);
price = 250;
case 'I':printf("How many do you want: ");
scanf("%d",&qunatity);
price = 80;
break;
case 'C':printf("How many do you wnat: ");
scanf("%d",&qunatity);
price = 40;
break;
default:printf("Wrong choice");
return 0;
}
if(qunatity >= 3){
    discount == 0.05; 
     bill = qunatity*price;
float  td = bill-0.05*bill;
total_bill = td + 0.7*td;

}else{
     bill = qunatity*price;
     total_bill = bill + 0.7*bill;
}
printf("Your Total bill is %.2f",total_bill);
}