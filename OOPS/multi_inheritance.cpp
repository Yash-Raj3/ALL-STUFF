#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string Name;
		int age; 
	
};
class student : public Person {
public:
	int roll_no;
	
};
class gradstudent: public student{
	public :
		string researchArea;
	
};
int main(){
	gradstudent s1;
	s1.Name ="Yash";
	s1.roll_no=123;
	s1.researchArea = "karachi";
	s1.age =23;
	cout<<"Name: "<<s1.Name<<endl<<"Age: "<<s1.age<<endl<<"Roll no: "<<s1.roll_no<<endl<<"Research Area: "<<s1.researchArea;
	}





















