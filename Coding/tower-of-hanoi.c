#include<stdio.h>
#include<math.h>
void Hanoi(int n,char src,char help,char dest ){
if(n==1){
   printf("%c -> %c\n",src,dest);
   return ;
}
Hanoi(n-1,src,dest,help);
printf("%c -> %c\n",src,dest);
Hanoi(n-1,help,src,dest);
}
int main(){

int n;
printf("Enter Number of Disks: ");
scanf("%d",&n);
Hanoi(n,'S','H','D');
printf("The number of Moves are %.2f",(pow(2,n)-1));
}