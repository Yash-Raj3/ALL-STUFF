#include<stdio.h>
void printStatistics(int data[50][4],float gpa[50],int salarydemand[50],int x,int y){
int highgpa=0,sum=0,qualified=0;
float average; int percentage;
for(int i=0;i<50;i++){
    if(gpa [i]>3.0 && data[i][1]>50){
        highgpa++;
    }
    if ((data[i][1]+data[i][2]+data[i][3] )>x && salarydemand[i]<y){
       qualified++;
    }
    sum += salarydemand[i];
}
average = sum/50;
percentage = (qualified/50)*100;
for(int i=0;i<50;i++){
    for(int j=0;j<49-i;j++){
        if(gpa[j]>gpa [j+1]){
            float temp = gpa[j];
            gpa [j]=gpa[j+1];
            gpa [j+1]=temp;
        }
    }
}
float mediangpa = (gpa[24]+gpa[25])/2.0;
printf("a) Candidates with GPA > 3.0 and Analytical score > 50: %d\n", highgpa);
    printf("b) Percentage with cumulative score > %d and salary < %d: %d%%\n", x, y, percentage);
    printf("c) Average salary demand: %.2f\n", average);
    printf("d) Median GPA: %.2f\n", mediangpa);
}
int main() { 

int data[50][4] = {{57, 12, 35, 8}, {63, 46, 17, 31}, {69, 42, 5, 28}, {64, 77, 19, 50}, {73, 26, 41, 16}, {89, 11, 
33, 7}, {72, 45, 18, 30}, {70, 43, 4, 27}, {65, 38, 20, 48}, {2, 25, 40, 15}, {48, 13, 36, 9}, {24, 47, 16, 32}, {8, 
41, 6, 29}, {13, 36, 21, 49}, {4, 27, 42, 17}, {50, 12, 34, 7}, {53, 46, 19, 31}, {11, 44, 5, 28}, {16, 39, 22, 48}, 
{3, 26, 40, 14}, {57, 10, 32, 6}, {25, 48, 15, 33}, {7, 40, 8, 30}, {14, 37, 20, 49}, {51, 24, 39, 13}, {49, 11, 33, 
9}, {26, 49, 17, 34}, {9, 42, 7, 29}, {17, 40, 23, 50}, {5, 28, 43, 18}, {31, 15, 37, 10}, {12, 35, 21, 46}, {6, 29, 
44, 19}, {33, 16, 38, 11}, {19, 32, 8, 41} }; 
float GPA[50] = {3.3, 0.8, 1.2, 3.5, 2.1, 0.6, 1.8, 2.3, 1.0, 1.2, 3.1, 2.3, 3.7, 3.9, 3.5, 0.2, 3.6, 1.8, 0.6, 3.1, 
1.2, 2.3, 3.5, 0.8, 1.2, 2.3, 3.8, 3.5, 2.1, 0.6, 2.0, 3.1, 2.3, 0.8, 3.5, 1.2, 0.6, 2.1, 1.9, 2.3, 1.2, 3.6, 3.5, 1.8, 
2.3, 1.0, 3.1, 2.1, 1.2, 0.8 }; 
int salaryDemand[50] = {90000, 240000, 440000, 120000, 160000, 290000, 330000, 170000, 460000, 
370000, 490000, 230000, 300000, 190000, 210000, 480000, 180000, 320000, 430000, 50000, 280000, 
390000, 140000, 500000, 360000, 410000, 260000, 210000, 170000, 350000, 440000, 390000, 100000, 
330000, 130000, 200000, 50000, 500000, 250000, 470000, 240000, 380000, 460000, 490000, 120000, 
420000, 150000, 430000, 290000, 280000 }; 
int X, Y; 
printf("Enter X: "); 
scanf("%d", &X); 
printf("Enter Y: "); 
scanf("%d", &Y); 
printStatistics(data, GPA, salaryDemand, X, Y); 
return 0; 
}