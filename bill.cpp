// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
// Abdul Moiz Azher
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int quantity;
    float itemprice;
    float totalbill;

 cout<<"enter the amount of item"<<endl;
 cin>>quantity;   
cout<<"enter the price of item"<<endl;
cin>>itemprice;
totalbill=itemprice*quantity;
cout<<setprecision(4)<<fixed<<showpoint;
cout<<"the total price is "<<totalbill;
// Fill in the input statement to bring in the quantity. 
// Fill in the prompt to ask for the price.
// Fill in the input statement to bring in the price of each item.
// Fill in the assignment statement to determine the total bill.
// Fill in the output statement to print total bill,
// with a label to the screen.
return 0;
}