#include<iostream>
#include<string>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"Animal is Eating\n";
		}
};
class Dog: public Animal{
	public :
		void bark(){
		cout<<"Dog is Barking\n";
		}
};
int main(){
	Dog d1;
	d1.eat();
	d1.bark();
	
}
