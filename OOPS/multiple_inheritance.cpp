#include<iostream>
#include<string>
using namespace std;
class student{
	public :
		string name;
		int rollno;
};
class teacher{
	public:
		string subject;
		double salary;
};
class TA : public teacher ,public student{
	
};
int main(){
	TA t1;
	t1.name ="Qasim";
	t1.rollno = 1234;
	t1.salary = 1000;
	t1.subject = "Ethics";
	cout << t1.name<<endl<<t1.rollno<<endl<<t1.salary<<endl<<t1.subject;
	
	
	
}
