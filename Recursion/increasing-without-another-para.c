#include<stdio.h>
void increasing(int n){
    if(n==0)return;
    if(n>1){
    printf("%d ",n);
    }
     increasing(n-1);
     printf("%d ",n);
     return ;

}
int main(){
 int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    increasing(n);



}