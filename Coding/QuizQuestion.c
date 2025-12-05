#include<stdio.h>
int main(){
char matrix[4][4]={
    {'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','n','o'}
};
char Input[4]; 
int f =0;
while(f == 1 ){
printf("Enter String:");
scanf(" %[^\n]",Input);
for(int i=0;i<4;i++){
    if (Input[i]=='L'||Input[i]=='R'||Input[i]=='U'||Input[i]=='D'){
        f = 1;
    }
}
}
}