#include<stdio.h>

int main(){
int arr1D[5];
int arr2D[3][3];
for(int i=0;i<5;i++){
    printf("Enter Element %d of First 1D Array:",i+1);
    scanf("%d",arr1D+i);
}
for(int i=0;i<3;i++){
    for(int j=0; j<3;j++){
        printf("Enter Element of Row %d And Column %d of Array 2D:",i+1,j+1);
        scanf("%d",(*(arr2D+i))[j]);
    }
}


}
