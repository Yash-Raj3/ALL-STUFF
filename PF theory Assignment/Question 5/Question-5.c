#include<stdio.h>
int main(){
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    int num;
    printf("Enter the number (0-9)");
    while(1){
        scanf("%d",&num);
        if (num<0 || num>9){
            break;
        }
        switch(num){
            case 0:c0++;break;
            case 1:c1++;break;
            case 2:c2++;break;
            case 3:c3++;break;
            case 4:c4++;break;
            case 5:c5++;break;
            case 6:c6++;break;
            case 7:c7++;break;
            case 8:c8++;break;
            case 9:c9++;break;
    
                }
    }
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
   
   
   
   
   
   
   