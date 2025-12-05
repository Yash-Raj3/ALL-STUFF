#include<stdio.h>
int main(){
int a[10][10],b[10][10];
int m,n,p,q;
int result[10][10];
printf("Enter Number of Rows and columns in First Matrix: ");
scanf("%d %d",&m,&n);
printf("Enter Number of Rows and columns in Second Matrix: ");
scanf("%d %d",&p,&q);
if (m!=p && n!=q){
    printf("Rows and Columns Must be same!");
    return 0;
}
printf("Enter First matrix\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       printf("Enter %d %d Element :",i,j);
       scanf("%d",&a[i][j]);
    }
}
printf("Enter Second matrix\n");
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
       printf("Enter %d %d Element :",i,j);
       scanf("%d",&b[i][j]);
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        result[i][j]=a[i][j]-b[i][j];
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       printf("%d\t",result[i][j]);
    }
    printf("\n");
}
}