#include<stdio.h>
int main(){
int a[10][10],b[10][10];
int m,n,p,q;
int sum;
int result[10][10];
printf("How Many rows and column You want in First Matrix?");
scanf("%d %d",&m,&n);
printf("How Many rows and column You want in Second Matrix?");
scanf("%d %d",&p,&q);
if(n!=p){
    printf("Operation cannot be performed! Row and Columns Of First and Second Matrices are not equal!\n");
    return 0;
}
printf("Enter First Matrix Elements\n");
for (int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("Enter %d %d Element:",i,j);
        scanf("%d",&a[i][j]);
    }
} 
printf("Enter Second Matrix Elements\n");
for (int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        printf("Enter %d %d Element:",i,j);
        scanf("%d",&b[i][j]);
    }
} 
for (int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        sum =0;
        for(int k=0;k<n;k++){
            sum += a[i][k]*b[k][j];
        }
        result[i][j]=sum;
    }
}
 for (int i=0;i<m;i++){
    for(int j=0;j<q;j++){
       printf("%d\t",result[i][j]);
    }
    printf("\n");
} 
}