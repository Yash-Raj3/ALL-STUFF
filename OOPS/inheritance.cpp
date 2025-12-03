// Inheritance 
// parents Properties are transfered to child 
// when properties & member function of base class are passed to drerived classs
// it is used for code reusibility 
// for example there is a int a variable in class A and and it is also used in Class B instead of creating a new Variable 
// we easily can inherit it
// type of inheritance
//1.single inheritance 2. Multi-level inheritance (Person->Student->graduateStudent)
#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string Name;
		int age; 
		Person(string name,int Age ){//-> this is parametrized constructor
			Name = name;
			age = Age;
		}

};
class student : public Person {
	// Name , age rollno;// we have already defined the age and name in the class person we donot need to  create it another time 
	// we can simply inherit it 
	// there are mode to inherit public , private and protect
	// syntax Class name : mode previous class name
	public:
			student(string name, int Age, int roll_no):Person(name, Age){// custom cunstructor
		this->roll_no = roll_no;
	}
	int roll_no;
	void getinfo(){
		cout << "Name: "<<Name<<endl;
		cout << "Age: "<<age<<endl;
		cout <<"Roll No: "<<roll_no<<endl;
	}

	
};

int main(){
 	student s1("Rahul",12,1);
	s1.getinfo();
	
	
}


