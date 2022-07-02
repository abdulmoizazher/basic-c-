#include<iostream>
class account {
    private:
    int accountnumber;
    double accountbalance;
    public:
    account(){

        accountnumber = 0;
        accountbalance = 0;
    }
    void setdata( int x,double y){

    accountnumber = x;
    accountbalance = y;}
  void showdata(){
    std ::cout<<" the account number is"<< accountnumber<<"\n";
    std::cout<<" the account balance is"<< accountbalance<<"\n";
  }
    };
int main(){
    account Ac;
    Ac.setdata(12,10000.36);
    Ac.showdata();
    return 0;
} 

