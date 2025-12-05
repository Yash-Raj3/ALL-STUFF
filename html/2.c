#include<stdio.h>
int main(){
int i,j,k;
int n;
printf("Enter Number of Lines:");
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=n-i-1;j>0;j--){
    printf(" ");
}
printf("*");
if(i!=0){
    for(j=0;j<2*i-1;j++){
        printf(" ");
    }
    printf("*");
}
printf("\n");
}
for(i=0;i<n-1;i++){
for(j=i;j>=0;j--){
    printf(" ");
}
printf("*");
if(i!=n-2){
    for(j=0;j<2*(n-i)-5;j++){
        printf(" ");
    }
    printf("*");
}
printf("\n");
}



}