//According to the Gregorian calendar, it was Monday on the date
//01/01/01. If any year is input through the keyboard write a program
//to find out what is the day on 1st January of this year.
#include<stdio.h>
int main(){
	int ref_year=1900,year,leap=0,day;
	printf("Enter Year between 1900-2099 :");
	scanf("%d",&year);
	
	int diff = year - ref_year;
	
     for (ref_year=1900;ref_year < year;ref_year++){
	 
		if(ref_year % 100==0){
			if(ref_year % 400 ==0){
				leap++;
			}	
		}else{
			if(ref_year % 4==0){
				leap++;
				
			}
		}		
	}
	int total_days = (diff - leap)*365+leap*366;
	day= total_days % 7;
	switch (day){
		case 0:printf("Monday\n");break;
		case 1:printf("Tuesday\n");break;
		case 2:printf("Wednesday\n");break;
		case 3:printf("Thursday\n");break;
		case 4:printf("Friday\n");break;
		case 5:printf("Saturday\n");break;
		case 6:printf("Sunday\n");break;
	}
	
	
	
	return 0;	
}
