#include<stdio.h>
void increasing(int i,int n){
    if(i>n)return;
    printf("%d ",i);
    return increasing(i+1,n);
}
int main(){
 int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    increasing(1,n);



}