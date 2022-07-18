// This program prints "You Pass" if a student's average is 
// 60 or higher and prints "You Fail" otherwise
// Abdul Moiz azher
#include <iostream>
using namespace std;
void grades (float &num );
int main()
{
   int no_of_grades = 0;
   float grade = 0,total = 0,average =0; 
   cout<<"enter the number of grades "<<"\n";
   cin>>no_of_grades;
   
   for (int i= 0; i < no_of_grades; i++){
    cout<<"enter the grade between 0-100"<<"\n";
    cin>>grade;
    cout<<grade<<endl;
    total = total + grade;
   
       }
   cout<<"the total is "<<total<<endl;
   average = total/static_cast<float>(no_of_grades);
   cout<<average;
   grades(average);
   return 0;
   
}
void grades(float &average){


if (average < 100 && average >= 90){
cout << "you got A" << endl;}
else if (average <= 90  && average > 80){
cout<<"you got B grade"<<endl;
}
else if (average > 69 && average <= 80){
cout << "you got C" << endl;}    
else if (average > 59 && average <= 70){
cout << "You got D" << endl;}
else if (average >49 && average <= 60)
cout<< "you got F";
  }
  
