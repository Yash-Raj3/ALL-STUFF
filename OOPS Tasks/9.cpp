#include<iostream>
#include<string>
using namespace std;
class Shape{
	void area(){
		cout<<"Area of Shape: ";
		
	}
};
class Rectangle : public Shape{
	public:
		float length;
		float width;
		float area(){
		   cout<<"Area of Rectangle: "<<width*length<<endl;
		}
};
int main(){
	Rectangle r1;
	r1.length = 10;
	r1.width = 10;
	r1.area();
	
	
}
