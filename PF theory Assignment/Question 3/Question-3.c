#include<stdio.h>
int main(){
int Age;
char Eye_test,Written_test,Driving_test,Medical_certificate;
printf("Enter Your Age :");
scanf("%d",&Age);
if(Age>=18){
    printf("Eye test Passed(P) or Failed(F):\n");
    scanf(" %c",&Eye_test);
    if(Eye_test=='P'){
        printf("Written Test Passed(P) or Failed(F):\n");
        scanf(" %c",&Written_test);
        if(Written_test=='P'){
            printf("Driving Test Passed(P) or Failed(F):\n");
            scanf(" %c",&Driving_test);
            if(Driving_test=='P'){
                if(Age<60){
                    printf("You Are eligible");
                }
                else{
                  printf("Do you have Medical fitness certificate(Y/N):\n");
                    scanf(" %c",&Medical_certificate);
                    if(Medical_certificate=='Y'){
                        printf("You Are eligible ");
                    }else{
                        printf("You Are not eligible");
                    }
                }
            }
            else{
                 printf("You Should First Pass the Driving Test"); 
            }
        }else{
            printf("You Need to Retake Written Test");
        }
    }else{
         printf("You Might Need a prescription for glasses ");
    }
}else{
    printf("You are not eligible for Licence");
}
return 0;

}