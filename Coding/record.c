#include<stdio.h>
#include<string.h>
void input(int id[100],char name[100][50],float assignment[100],float project[100],float mid[100],float final[100],int n);
float score(float assignment,float project,float mid,float final,int n);
void calculategrade(float Score);
void deanlist(int id[100],char name[100][50],char grade[100],float gp[100],int n);
int main(){
int id[100],n;
char name[100];
float assignment[100],project[100],mid[100],final[100];
char grade[100];
float grand_score[100];
float gp[100];
 printf("How Many students do you want to enter? ");
 scanf("%d",&n);
input(id,name,assignment,project,mid,final,n);
for(int i =0;i<n;i++){
     grand_score[i] = score(assignment[i],project[i],mid[i],final[i],n);
    calculategrade(grand_score[i],grade[i],)
}

}
void input(int id[100],char name[100][50],float assignment[100],float project[100],float mid[100],float final[100],int n){
    for(int i=0;i<n;i++){
        printf("\n==Enter Student %d Details==\n",i+1);
        printf("Enter Student Id: ");
        scanf("%d",&id[i]);
        printf("Enter Student Name: ");
        scanf(" %[^\n]",name[i]);
        printf("Enter Assignment Marks : ");
        scanf("%d",&assignment[i]);
        printf("Enter Project Marks : ");
        scanf("%d",&project[i]);
        printf("Enter Mids Marks : ");
        scanf("%d",&mid[i]);
        printf("Enter Final Marks : ");
        scanf("%d",&final[i]);
    }
}