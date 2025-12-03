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
			if(f < 0){
				cout<<"Fuel can not be Negative!"<<endl;
			}else{
			Fuel =f;
			}
		}
		int getspeed(){
			return Speed;
		}
		float getfuel(){
			return Fuel;
		}
};
int main(){
	Car c1;
	c1.setfuel(50);
	c1.setSpeed(120);
	if(c1.getfuel()<0){
		cout<<"Fuel must be Positive";
	}else{
		cout<<"Car Speed: "<<c1.getspeed()<<endl<<"Fuel: "<<c1.getfuel()<<endl;
	}
	
	
}
