#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main(){
    system("cls");
float Cap[3];

for(int i =0;i<3;i++){
cout << "Enter Value of Capacitor "<<i+1<<endl;
cin>> Cap[i];
}
int choice;
cout<<"1.Series"<<endl<<"2.Parallel"<<endl;
cin>>choice;
if(choice == 1){
    float Capacit =  (1/Cap[0])+(1/Cap[1])+(1/Cap[2]);
    float Capacitance = 1/Capacit;
    cout<<"Capacitance In Series: "<<Capacitance<<endl;
}else if(choice ==  2){
     float Capacitance = Cap[0]+Cap[1]+Cap[2];
     cout<<"Capacitance in Parallel: "<<Capacitance<<endl;
}else{
    cout<<"Invalid Option!"<<endl;
}
return 0;


}