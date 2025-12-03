#include<iostream>
#include<string>
using namespace std;
// Run time polymorphism
//overloading vs overriding
//in Overloading we make fuctions in one class
// in overriding is dependent on inheritance 
//Function Over Riding 
// parent And Child both contain the same function with different implementation
// The parent class Function is said to be overridden 
//in this child class function override th parent function
//  another Example 
//Virtual Functions;
//virtual function are dynamic in nature 
//defined by the keyword virtual inside a  base class and are always declared with a base 
//class and overridden in a child class
//a virtual function is called during runtime 
class Parent {
	public: 
void	getinfo(){
		cout<< "Parent\n";
		
	}
virtual	void hello(){
	cout<<"Hello Parent";
	
}
};
class Child : public Parent{
	public :
		void getinfo (){
			cout<<"Child\n";
		}
			void hello(){
	cout<<"Hello child";
	
}
};
int main(){
	Child c1;
	c1.hello();
	
	
	
}
