#include <stdio.h>

int main(){
    int age;
    char eyeTest, writeTest, driveTest, medCert;
    printf("Enter your age:\n");
    scanf("%d",&age);
    if (age<18){
        printf("You are not eligible!\n");
    } else{
        printf("Have you passed or failed your eyesight exam? (P/F)\n");
        scanf(" %c",&eyeTest);
        if ((eyeTest == 'f')||(eyeTest=='F')){
            printf("You will need a prescription for glasses!\n");
        } else{
            printf("Have you passed or failed your written test? (P/F)\n");
            scanf(" %c",&writeTest);
            if ((writeTest == 'f')||(writeTest=='F')){
                printf("You must retake the written test!\n");
            } else{
                printf("Have you passed or failed your driving test? (P/F)\n");
                scanf(" %c",&driveTest);
                if ((driveTest == 'f')||(driveTest =='F')){
                    printf("Sorry, you are not eligible for license!\n");
                } else{
                    if (age<60){
                        printf("You are eligible for the license!\n");
                    } else{
                        printf("Do you have a medical fitness certificate? (Y/N)\n");
                        scanf(" %c",&medCert);
                        if ((medCert == 'y')||(medCert == 'Y')){
                            printf("You are eligible for the license!\n");
                        } else{
                            printf("Sorry, you are not eligible for license!\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}