#include<iostream>
#include<string>
using namespace std;
// hybrid inheritance;
// mix of all 
class Person{
	public :
		string name;
		int age;
};
class student:public Person{
	public :
		int roll_no;
};
class teacher : public Person{
	public:
	string subject;
};
class TA: public student,public teacher{
	
};
int main(){
	TA t1;
	t1.roll_no= 2123;
	cout<<t1.roll_no;
	
}




