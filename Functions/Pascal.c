 #include<stdio.h>
// int factorial(int a){
//     int fact=1;
// for(int i =1;i<=a;i++){
//     fact *= i;

// }
// return fact;

// }
// int Combination(int n,int r){
  
//  int combi =  factorial(n)/(factorial(r)*factorial(n-r));
 
// return combi;
// }
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
for(int i=0;i<=n;i++){// Another Best and Efficient Method
    int First= 1;
    for(int space = n-i;space>0;space--){
        printf(" ");
    }
    for(int j =0;j<=i;j++){
        printf("%d ",First);
        // int Combi = Combination(i,j);
         First = First* (i-j)/(j+1);
    }
    printf("\n");
}
}