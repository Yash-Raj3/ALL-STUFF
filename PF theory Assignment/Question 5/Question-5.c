#include<stdio.h>
int main(){
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    int num;
    printf("Enter the number (0-9)");
    do{ 
      scanf("%d",&num);
       if(num == 0){
       c0++;
       }else if (num == 1){
       c1++;
       }else if (num == 2){
       c2++;
       }else if (num == 3){
       c3++;
       }else if (num == 4){
       c4++;
       }else if (num == 5){
       c5++;
       }else if (num == 6){
       c6++;
       }else if (num == 7){
       c7++;
       }else if( num == 8){
       c8++;
       }else if (num == 9){
       c9++;
       }
       }while(num <= 9 && num >=0);
    
    printf("Number\t Number occurence\n");
    printf("0\t%d\n",c0);
     printf("1\t%d\n",c1);
      printf("2\t%d\n",c2);
      printf("3\t%d\n",c3);
      printf("4\t%d\n",c4);
      printf("5\t%d\n",c5);
      printf("6\t%d\n",c6);
      printf("7\t%d\n",c7);
      printf("8\t%d\n",c8);
      printf("9\t%d\n",c9);
      return 0;
}
   
   
   
   
   
   
   