// This program will input the value of two sides of a right triangle and then 
// determine the size of the hypotenuse.
// Abdul Moiz Azher 
#include <iostream>
#include <cmath> // needed for math functions like sqrt()
#include<iomanip> // needed for formatting of output 
using namespace std;
int main(){
    float a,b,hyp; //the small sides of triangle and hypotenuse 
 cout<<"please enter the value of the two sides "<<"\n";
 cin>>a>>b;
 hyp=sqrt(pow(a,2)+pow(b,2));
 cout<<"the sides of triangle is "<<a<<" and "<<b<<"\n";
  cout<<setprecision(2)<<fixed<<showpoint;
 cout<<"the hypotenuse is "<<hyp<<endl;

 return 0;   
}