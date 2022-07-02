// This program prints "You Pass" if a student's average is 
// 60 or higher and prints "You Fail" otherwise
// Abdul Moiz azher
#include <iostream>
using namespace std;
int main()
{
float average; // holds the grade average
cout << "Input your average:" << endl;
cin >> average;
if (average < 80 && average >= 60){
cout << "You Pass" << endl;}
if (average <= 80  && average > 90){
cout << "you got b" << endl;}
if (average < 100 && average >= 90){
cout<<"you got A grade"<<endl;
}
if (average > 100){
cout << "invalid ouput" << endl;}    
else{
cout << "You Fail" << endl;}
return 0;
}