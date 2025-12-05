#include<stdio.h>
int main(){
	FILE *fptr;
	char Name[100];
	fptr = fopen("hello.txt","r");
	while(fgets(Name,sizeof(Name),fptr)!= NULL){
		printf("%s",Name);
	}
	
	fclose(fptr);
	
	
}
