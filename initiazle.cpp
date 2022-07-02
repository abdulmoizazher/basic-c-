// This program tests whether or not an initialized value
// is equal to a value input by the user 
// Abdul Moiz Azher
#include <iostream>
using namespace std;
int main( )
{
int num1,num2; // num1 is not initialized
cout << "Please enter an integer" << endl;
cin >> num1;
int num; // num1 is not initialized
cout << "Please enter an integer" << endl;
cin >> num2;
cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
if (num1 == num2){
cout<<"num1 and num2 sre equal"<<endl;
cout << "Hey, that's a coincidence!" << endl;} 
else{
cout << "The values are not the same" << endl;}
return 0;
}
