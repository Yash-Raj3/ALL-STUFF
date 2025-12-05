#include<stdio.h>
int main(){
	struct  Date{
	char Day;
	int Date;
	int Year;	
	};
	struct Student{
		int roll_name;
		char Name[40];
		int Age;
		struct dob;// Nested
		//  to Call it use s1.dob.date
	};// Dot is Object Operator;
	// We can also use nested structure
	
	struct Student s1 ={1,"Yash Raj", 18};
	struct Student s2 ={2,"Qaim Badmosh", 18};
	struct Student s3 ={3,"Mubashir Nadeem", 24};
	printf("%d %s %d \n",s1.roll_name,s1.Name,s1.Age);
	printf("%d %s %d \n",s2.roll_name,s2.Name,s2.Age);
	printf("%d %s %d ",s3.roll_name,s3.Name,s3.Age);
}
