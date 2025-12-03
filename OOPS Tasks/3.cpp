#include<iostream>
#include<string>
using namespace std;
class Product{
	string Name;
	float Price;
	public:
		void setName(string name){
			Name =  name;
		}
		void setPrice(float price){
			if(price < 0){
				cout<<"Price Cannot be Negative!"<<endl;
				
			}else{
			Price = price;
			}
		}
		string getName(){
			return Name;
			
		}
		float getPrice(){
			return Price;
		}
};
int main(){
	Product p1;
	p1.setName("Laptop");
	p1.setPrice(75000);
	
	cout<<"Name: "<<p1.getName()<<endl<<"Price: "<<p1.getPrice()<<endl;
	
	
}
