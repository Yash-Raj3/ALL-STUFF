#include<stdio.h>
void Number(int n){
if(n==0)return;
printf("%d ",n);
return Number(n-1);
printf("\n");
}
void greeting(int n){
    if(n==0)return;
    printf("Hello Dear\n");
    return greeting(n-1);
}
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    Number(n);
    greeting(n);
}