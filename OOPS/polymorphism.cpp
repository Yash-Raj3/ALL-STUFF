#include<iostream>
#include<string>
using namespace std;
// Polymorphism -> means  Multiple Forms 
// It is the Ability of object to take on different forms or behave in different ways depending on the context
// inn which they are used 
//two type
//compile time Polymorphism 
//Run time Polymorphism 
// Example Constructor Overloading ->contructor overloading
// two or more constructor in one class;
// another example function overloading 
//Operator overloading is also an example of compile time ;
class print{
	public :
		void show(int x){
			cout << "Int: "<<x<<endl;
		}
		void show(char ch){
			cout << "Char: "<<ch<<endl;
		}
};
int main(){
	print p1;
	p1.show('H');
	
	
}
