#include <stdio.h>
int main()
{
    float t[4][7],avg,sum;
     int  i,j;
    printf("Enter temperature of 7 days of Three Cities\n");
    for (i = 0; i <4; i++)
    {
        if(i==0)printf("Enter Karachi's 7 Days Temp-\n");
        if(i==1)printf("Enter Lahore's 7 Days Temp-\n");
        if(i==2)printf("Enter Peshawar 7 Days Temp-\n");
        if(i==3)printf("Enter Islamabad's 7 Days Temp-\n");

for(j=0;j<7;j++){
    if(j==0){
        printf("Monday Temp:");
    }else if(j==1){
        printf("Tuesday Temp:");
    }else if(j==2){
        printf("Wednesday Temp:");
    }else if(j==3){
        printf("Thursday Temp:");
    }else if(j==4){
        printf("Friday Temp:");
    }else if(j==5){
        printf("Saturday Temp:");
    }else if(j==6){
        printf("Sunday Temp:");
    }
    scanf("%f",&t[i][j]);
}
    }

    printf("City\t\tMonday\tTuesday\tWednesday\tThursday\tFriday\tSaturday\tSunday\n");
    for(i=0;i<4;i++){
if(i==0)printf("Karachi\t");
        if(i==1)printf("Lahore\t");
        if(i==2)printf("Peshawar\t");
        if(i==3)printf("Islamabad\t");
for(j=0;j<7;j++){
printf("%.1f\t",t[i][j]);
}
printf("\n");
    }
    printf("--Average Temperature of Days--\n");
    for(i=0;i<4;i++){
        sum =0;
        avg=0;
for(j=0;j<7;j++){
    sum+=t[i][j];
}
avg = sum/7;
printf("Average Temperature of  %d is %.1f:",i+1,avg);
printf("\n");
    }
    return 0;
}
