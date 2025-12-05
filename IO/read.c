#include<stdio.h>
int main(){
    FILE *fptr;
    char fileName[50];
    char input[500];
    printf("Enter File Name with Ext: ");
    scanf("%[^\n]",fileName);
    fptr = fopen(fileName,"r");
    while(fgets(input,sizeof(input),fptr)!=0){
        printf("%s",input);
    }
    fclose(fptr);
}