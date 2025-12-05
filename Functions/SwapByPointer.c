#include<stdio.h>
void Swap(int *a,int *b){
int temp = *a;
*a = *b;
*b = temp;
}
int main(){
int a=9,b=4;
Swap(&a,&b);
printf("%d %d ",a,b);

}
