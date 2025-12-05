#include<stdio.h>
int main(){
int Ecount=0,Ocount=0;
int n;
printf("Enter Number : ");
scanf("%d",&n);
for(int i =1 ; i<=n; i++){
    if(i%2==0){
        Ecount++;
    }
    if(i%2!=0){
        Ocount++;
    }
}
printf("There are %d Even and %d Odd Number in Between %d",Ecount,Ocount,n);


}