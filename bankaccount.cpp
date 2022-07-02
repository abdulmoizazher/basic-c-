#include<iostream>
#include <string>
using namespace std;
 class bankaccount{

private:
int accountnumber;
string name;
double balance;
 public:
 bankaccount(){
   accountnumber =0 ;
   name = "";
   balance = 0;
   
 }
 bankaccount(int x){
    accountnumber = x;
   name = "";
   balance = 0;
     }
     bankaccount(int x,string y){
    accountnumber = x;
    name = y;
    balance = 0;
     }
    bankaccount(int x,string y, double z){
    accountnumber = x;
    name = y;
    balance = z;
     };

     void showdata(){
        cout<<"account number of  account holder is "<<accountnumber<<endl;
        cout<<"name of  account holder is "<<name<<endl;
        cout<<"balance  of  account holder is "<<balance<<endl;
        cout<<endl<<endl;
     }
};
int main(){
    bankaccount a1;
    bankaccount a2(10);
    bankaccount a3(11,"jazeb");
    bankaccount a4(11,"zohaib",1000);
    a1.showdata();
    a2.showdata();
    a3.showdata();
    a4.showdata();
    return 0;

}

