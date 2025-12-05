#include<stdio.h>
int main(){
int number[10];
for (int i=0;i<10;i++){
    printf("Enter number %d",i+1);
    scanf("%d",&number[i]);
}
for (int i =0;i<10;i++){
    for(int j=0;j<9-i;j++){
        if(number[j]>number[j+1]){
            int temp = number[j];
            number[j]=number[j+1];
            number[j+1]=temp;
        }
    }
}
for(int i= 0;i<10;i++){
    printf("%d\t",number[i]);
}


}