#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter First Card Number(1-13):");
    scanf("%d",&a);
    printf("Enter Second Card Number(1-13):");
    scanf("%d",&b);
     printf("Enter Third Card Number(1-13):");
    scanf("%d",&c);
     printf("Enter Forth Card Number(1-13):");
    scanf("%d",&d);
     printf("Enter Fifth Card Number(1-13):");
    scanf("%d",&e);
       
      if ((a==b && b==c && d==e && d!=a)||
          (c==d && d==e && a==b && a!=c)||
          (b==c && c==d && a==e && a!=b)||
          (a==b && b==e && c==d && c!=a)||
          (a==c && c==d && b==e && b!=a))
         {
        printf("The Hand is full House !!");
          }else{
        printf("The Hand is not full House ");
       }
       return 0;

}