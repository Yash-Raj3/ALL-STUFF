#include<stdio.h>
char * returnArr(char arr[]){
 arr += 2;
 return arr;



}
int main(){
char *ptr;
char arr[5]={'1','2','!','4','5'};
ptr =  returnArr(arr);
printf("%c",*ptr);



}