#include<stdio.h>
#include<stdlib.h>
int main(){
	system("color 04");
// w and a are mode  a append and w write 
//int  n1,n2;
//FILE *fptr;
//fptr = fopen("data.txt","w");
//printf("%p",fptr);
//if(fptr == NULL){
//    printf("Error");
//    return 1;
//}
//printf("ENter a number: ");
//scanf("%d",&n1);
//fprintf(fptr,"%d\n",n1);
//printf("Enter a number: ");
//scanf("%d",&n2);
//
//fprintf(fptr,"%d\n",n2);
//fclose(fptr);
FILE *fptr;
char filename[40];
char Name[50];
printf("Enter Folder Name With Extension: ");
scanf("%s",filename);
getchar();
fptr= fopen(filename,"w");
printf("Enter Your name: ");
//scanf(" %[^\n]",Name);
fgets(Name,sizeof(Name),stdin);
fprintf(fptr,"%s\n",Name);
fclose(fptr);

return 0;

}
