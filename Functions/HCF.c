#include<stdio.h>
int Min(int a,int b){
if(a<b)return a;
return b;
}
int HCF(int a,int b){
int hcf;
    for(int i =Min(a,b);i>=1;i--){
    
    if(a%i==0 && b%i==0){
        hcf = i;
        break;
    }

}

return hcf;

}
int main(){
int a=60,b=72;
int hcf = HCF(a,b);
 printf("%d",hcf);
}