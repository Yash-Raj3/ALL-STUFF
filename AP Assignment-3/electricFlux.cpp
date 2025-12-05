#include<iostream>
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
    system("cls");
float Ef;
float Area;
float Theta;
cout<< "Enter Magnitude of Electric Field(N/C): " <<endl;
cin>>Ef;
cout << "Enter Area of Surface(m^2): "<<endl;
cin >> Area;
cout << "Enter Angle in Degree: "<<endl;
cin >> Theta;
// Converting Degree into radian

float Eflux = (Ef*Area)*cos((Theta*M_PI)/180);
float Round = roundf(Eflux);
cout <<"Electric Flux: " << Round<<endl;

}