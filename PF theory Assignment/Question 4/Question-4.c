
#include<stdio.h>
int main(){
    int Card1,Card2,Card3,Card4,Card5;
    printf("Enter First Card Number(1-13):");
    scanf("%d",&Card1);
    printf("Enter Second Card Number(1-13):");
    scanf("%d",&Card2);
     printf("Enter Third Card Number(1-13):");
    scanf("%d",&Card3);
     printf("Enter Forth Card Number(1-13):");
    scanf("%d",&Card4);
     printf("Enter Fifth Card Number(1-13):");
    scanf("%d",&Card5);
       
      if ((Card1==Card2 && Card2==Card3 && Card4==Card5 && Card4!=Card1)||
          (Card3==Card4 && Card4==Card5 && Card1==Card2 && Card1!=Card3)||
          (Card2==Card3 && Card3==Card4 && Card1==Card5 && Card1!=Card2)||
          (Card1==Card2 && Card2==Card5 && Card3==Card4 && Card3!=Card1)||
          (Card1==Card3 && Card3==Card4 && Card2==Card5 && Card2!=Card1)||
          (Card1==Card4 && Card4==Card5 && Card3==Card2 && Card3!=Card1)||
          (Card1==Card3 && Card3==Card5 && Card2==Card4 && Card2!=Card1)||
          (Card1==Card2 && Card2==Card4 && Card3==Card5 && Card5!=Card1)||
          (Card2==Card3 && Card3==Card5 && Card1==Card4 && Card1!=Card2)||
          (Card2==Card4 && Card4==Card5 && Card1==Card3 && Card1!=Card2))
         {
        printf("The Hand is full House !!");
          }else{
        printf("The Hand is not full House ");
       }
       return 0;

}