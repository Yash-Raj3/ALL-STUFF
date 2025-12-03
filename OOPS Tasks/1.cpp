#include<iostream>
#include<string>
using namespace std;
class student {
	string Name;
	int Age;
	public:
		void set(string name ,int age ){
			Name = name;
			Age = age;
		}
		int  getage(){
			return Age;
		}
		string getName(){
			return Name;
		}
};
int main(){
student s1;
	s1.set("Yash",23);
	cout<<"Name: "<<s1.getName()<<endl<<"Age: "<<s1.getage();
	
}
