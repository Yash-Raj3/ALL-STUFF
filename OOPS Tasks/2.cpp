#include<iostream>
using namespace std;
 class Rectangle{
	float length;
	float width;
	public: 
	void setlength(float l){
		length = l;
	}
		void setwidth(float w){
		width = w;
	}
	float getlength(){
		return length;
	}
	float getwidth(){
		return width;
	}
	float area(){
		return length*width;
	}
};
int main(){
	Rectangle r1;
	r1.setlength(5);
	r1.setwidth(3);
	cout<<"Length: "<<r1.getlength()<<endl<<"Width: "<<r1.getwidth()<<endl<<"Area: "<<r1.area()<<endl;

	
	
}

