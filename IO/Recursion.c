#include<stdio.h>
#include<stdlib.h>
//int  factorial(int n){
//	if(n==1){
//	return 1;
//	}
//	return n*factorial(n-1);
//}
// int main(){
// 	system("color 04");
// 	int n;
// 	printf("Enter a number: ");
// 	scanf("%d",&n);
// 	int fact = factorial(n);
// 	printf("Result is %d ",fact);
// Sum of Natural Numbers 
//int  Sum(int n){
//	if(n==1){
//	return 1;
//	}
//	return n+Sum(n-1);
//}
// int main(){
// 	system("color 04");
// 	int n;
// 	printf("Enter a number: ");
// 	scanf("%d",&n);
// 	int sum = Sum(n);
// 	printf("Result is %d ",sum);
// 	
// To write 32123
int  descending(int n){
if(n==0){
	return 1;
}
printf("%d",n);
return descending(n-1);
 }
void ascending(int i,int n){
	
	if(i>n){
		return;
	}
	printf("%d",i);
	return ascending(i+1,n);
}
int  main(){
	system("color 04");
	int n;
	printf("Enter Number: ");
	scanf("%d",&n);
	descending (n);
	ascending(n-1,n);
	
	
}
