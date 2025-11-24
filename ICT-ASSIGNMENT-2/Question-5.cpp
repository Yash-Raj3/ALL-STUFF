#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class BankAccount{
private: 
string AccountNumber;
double Balance;
public: 
      BankAccount(string accountnumber){
        AccountNumber = accountnumber;
        Balance =0.0;
      }

  void Deposit(double amount){
    if(amount > 0){
        Balance += amount;
        cout<<"Deposited: "<<amount<<endl;
    }else{
        cout<<"Invalid Amount!"<<endl;
    }
  }
  void Withdraw(double amount){
    if(amount > 0 && amount <= Balance){
        Balance -= amount;
        cout<<"Withdraw Successful: "<<amount<<endl;

    }else{
        cout<<"No Enough! Available Balance:  "<<Balance<<endl;
    }
  }
  void checkbalance(){
    cout<<"Current Balance: "<<Balance<<endl;
  }
};
int main(){
    system("Color 04");
    string Account;
    double Amount;
    int Choice;
    cout<<"Enter Your Account Number: ";
    cin>>Account;
BankAccount myAccount(Account);
while(Choice!=4){
cout<<"1.Deposit Amount"<<endl;
cout<<"2.Withdraw Amount"<<endl;
cout<<"3.Check Balance"<<endl;
cout<<"4.Exit Program"<<endl;
cout<<"Enter Choice: ";
cin>>Choice;
switch(Choice){
    case 1: cout<<"Enter Amount to Deposit: ";
            cin>>Amount;
            myAccount.Deposit(Amount);
            cout<<"Enter Any Button to Continue...."<<endl;
            getchar();
            getchar();
            system("CLS");
            break;
    case 2: cout<<"Enter Amount To Withdraw: ";
            cin>>Amount;
            myAccount.Withdraw(Amount);
            cout<<"Enter Any Button to Continue...."<<endl;
            getchar();
            getchar();
             system("CLS");
            break;
    case 3: myAccount.checkbalance();
    cout<<"Enter Any Button to Continue...."<<endl;
            getchar();
            getchar();
     system("CLS");
    break;
    case 4: cout<<"Exiting....";
    break;
    default: cout<<"Invalid Choice!"<<endl;
}
}
}