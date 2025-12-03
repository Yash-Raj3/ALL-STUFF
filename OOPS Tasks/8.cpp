#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string Name;
		int age;
		void displayInfo(){
			cout<<Name<<endl<<age<<endl;
		}
};
class Student: public Person{
	public :
	int Roll_no;
	void displayRollNO(){
		cout << Roll_no;
	}
};
int main(){
	Student s1;
	s1.Name ="Yash";
	s1.age = 23;
	s1.Roll_no = 8;
 s1.displayInfo();
 s1.displayRollNO();
	
	
}
