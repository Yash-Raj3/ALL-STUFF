#include<stdio.h>
int main(){
    int x;
    int y;
    printf("Enter x-coordinate:");
    scanf("%d",&x);
    printf("Enter y-coodinate:");
    scanf("%d",&y);
    if(x>0 && y>0){
        printf("It lies in Quadrant 1");
    }else if(x<0 && y>0){
        printf("It lies in Quadrant 2");

    }else if(x<0 && y<0){
        printf("It lies in Quadrant 3");

    }else if (x>0 && y<0){
        printf("It lies in Quadrant 4");
    }else if(x==0 && y==0){
        printf("Point lies at origin");
    }
return 0;
    

    }
