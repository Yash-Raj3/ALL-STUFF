#include<iostream>
#include<string>
using namespace std;
class Vehicle{
	public:
	string model;
	string brand;
	
};
class Car:public Vehicle{
	public :
		int doors;
		void display_info(){
			cout<<brand<<endl<<model<<endl<<doors<<endl;
		}
};
class motor:public Vehicle{
	public:
	string type;
	void display_info(){
		cout<<brand<<endl<<model<<endl<<type<<endl;
	}
	
};
int main(){

Car c1;
c1.model = "Hund";
c1.brand= "h20";
c1.doors = 4;
c1.display_info();
motor m1;
m1.brand = "hundi";
m1.model = "Yash";
m1.type = "Hero";
m1.display_info();
}
