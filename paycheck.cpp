// This program takes two numbers (payRate & hours)
// and multiplies them to get grosspay. 
// It then calculates net pay by subtracting 15%
//Abdul Moiz Azher
#include <iostream>
#include <iomanip>
//using namespace std;
//Function prototypes
void printDescription(); 
void computePaycheck(float, int, float&, float&); 
int main()
{

 using std::cout;
using std::cin;
using std::setprecision;
using std ::  fixed;   
float payRate;
float grossPay;
float netPay;
int hours;
cout<<setprecision(2)<<fixed;
cout<< "Welcome to the Pay Roll Program" <<"\n"; 
printDescription(); //Call to Description function
cout << "Please input the pay per hour" << "\n";
cin >> payRate;
cout << "\n" << "Please input the number of hours worked" << "\n";
cin >> hours;
cout << "\n" << "\n";
computePaycheck(payRate,hours,grossPay,netPay);
//cout<< grossPay;
cout << "The net pay is $" << netPay << "\n";
cout<<"the gross pay is $"<<grossPay;
return 0;
}
void printDescription(){
using std::cout;
cout << "************************************************" << "\n" << "\n";
cout << "This program takes two numbers (payRate & hours)" << "\n";
cout << "and multiplies them to get gross pay " << "\n"; 
cout << "it then calculates net pay by subtracting 15%" << "\n";
cout << "************************************************" << "\n" << "\n";
  }
void computePaycheck(float rate, int time, float& gross, float& net)
{
using std:: cout;
gross = rate * time; 
net = gross - (15*gross)/100;
  };





