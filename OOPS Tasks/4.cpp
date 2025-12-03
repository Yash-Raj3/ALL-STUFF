#include<iostream>
using namespace std;
class Employee{
	int Id;
	float Salary;
	public:
		void setId(int id){
			Id = id;
		}
		void set_salary(float salary){
			if(salary < 0){
				cout<<"Salary must be Positive";
			}
			Salary = salary;
		}
		int getID(){
			return Id;
		}
		float getsalary(){
			return Salary;
		}
};
int main(){
	Employee emp;
	emp.setId(101);
	emp.set_salary(50000);
	if(emp.getsalary()<0){
		cout<<"Salary must be Positive";
	}else{
		cout<<"Employee Id: "<<emp.getID()<<endl<<"Salary: "<<emp.getsalary()<<endl;
	}
	
	
}
