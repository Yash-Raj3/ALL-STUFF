#include<iostream>
#include<string>
using namespace std;
class Vehicle{
	public :
		float speed;
		void showspeed(){
			cout<<speed<<endl;
		}
};
class Car: public Vehicle{
	public:
		void fuelType(){
			cout<<"Petrol";
		}
};
int main(){
	Car c1;
	c1.speed = 23.12;
	c1.showspeed();
	c1.fuelType();
	
}
