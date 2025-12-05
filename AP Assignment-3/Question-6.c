#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct StudentRecord{
int studentID;
char fullName[100];
char batch[10];
char membershiptype[5];
char registrationDate[11];
char dateofbirth[11];
char Interest[5];
} st;
st *students = NULL;
int count = 0;
void loadDatabase(const char *filename){
FILE *file = fopen(filename, "rb");
if(!file)return;



}
void Menu(){
    printf("\n========================\n");
    printf("1.Register a new Student\n");
    printf("2.Update membership type or batch\n");
    printf("3.Delete a Student registration\n");
    printf("View all Registration\n");
    printf("Generate batch-wise Reports.\n");
    printf("Exit the program\n");
    printf("========================\n");
}
int main(){
char filename[] = "members.dat";
loadDatabase (*filename);


}