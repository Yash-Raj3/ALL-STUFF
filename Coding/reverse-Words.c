#include<stdio.h>
#include<string.h>
int main(){
 char str[100];
 printf("Enter String:");
 scanf("%[^\n]",str);
 char word[100][100];
 int j=0,k=0;
 
for(int i=0; str[i]!='\0';i++){
    if(str[i]!=' '){
        word[j][k]=str[i];
        k++;
    }else{
        word[j][k]='\0';
        j++;
        k=0;
    }
}
word[j][k]='\0';
int total = j;
for(int x =total;x>=0;x--){
    printf("%s",word[x]);
    if(x>0)printf(" ");
}

}