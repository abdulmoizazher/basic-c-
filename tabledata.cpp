// This program will bring in two prices and two quantities of items 
// from the keyboard and print those numbers in a formatted chart.
//Abdul Moiz Azher
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float price1,price2;
    int quantity1,quantity2;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"please enter the price and quantity of the first item"<<endl;
    cin>>price1>>quantity1;
    cout<<"please enter the price and quantity of the second  item"<<endl;
    cin>>price2>>quantity2;
    cout<<setw(15)<<"price"<<setw(12)<<"Qunatity\n\n";
    cout<<setw(15)<<price1<<setw(12)<<quantity1<<"\n\n";
    cout<<setw(15)<<price2<<setw(12)<<quantity2;
    return 0;
}