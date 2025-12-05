#include<stdio.h>
int  main(){
FILE *fptr;
char filename[50];
char input[500];
printf("Enter File Name with Extension: ");
scanf("%[^\n]",filename);
fptr = fopen(filename,"a");
printf("Enter Inside File: ");
scanf(" %[^\n]",input);
fprintf(fptr,"%s\n",input);
fclose(fptr);





}