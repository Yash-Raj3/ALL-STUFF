#include<iostream>
using namespace std;
class Car{
	float Speed;
	float Fuel;
	public:
		void setSpeed(float s){
			Speed =s;
		}
		void setfuel(float f){
			if(Fuel < 0){
				cout<<"Fuel can not be Negative!"<<endl;
			}else{
			Salary = salary;
			}
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
