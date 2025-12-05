#include<stdio.h>
#include<string.h>
int main(){
 char str[100];
 printf("Enter String:");
 scanf("%[^\n]",str);
 char reverse[100];
 int len =0;
 for(int i=0; str[i]!='\0';i++){
    len++;
 }
 len = len-1;
 for(int i =0;i<=len;i++){
    
    reverse[i] = str[len-i];
    
 }
 reverse[len+1]='\0';
 printf("%d\n",len);
 printf("%s",reverse);
}