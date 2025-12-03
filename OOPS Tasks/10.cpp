#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
		float salary;
		void displaysalary(){
			cout<<"Salary: "<<salary<<endl;
		}
};
class Manager: public Employee{
	public:
		void bonus(){
			cout<<"Bonus is 5000"<<endl;
		}
};
int main(){
	Manager m1;
	m1.salary = 15000;
	m1.displaysalary();
	m1.bonus();
	
}
