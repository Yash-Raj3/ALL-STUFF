#include<iostream>
#include<string>
using namespace std;
// Hiearchial inheritance;
class Person{
	public :
		string name;
		int age;
};
class student:public Person{
	public :
		roll_no;
};
class teacher : public Person{
	string subject;
};
