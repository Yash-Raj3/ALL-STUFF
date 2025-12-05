#include<stdio.h>
int factorial(int a){
    int fact=1;
for(int i =1;i<=a;i++){
    fact *= i;

}
return fact;

}
int Combination(int n,int r){
  
 int combi =  factorial(n)/(factorial(r)*factorial(n-r));
 
return combi;
}
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    for(int j =0;i<=i;j++){
        int Combi = Combination(i,j);
        printf("%d ",Combi);
    }
    printf("\n");
}


}
