// This program finds the average time spent programming by a student
// each day over a three day period.
// Abdul Moiz Azher 
#include <iostream>
using namespace std;
int main()
{
int numStudents,n;
float numHours, total, average;
int student,day = 0; // these are the counters for the loops
cout << "This program will find the average number of hours a day" 
<< " that a student spent programming over a long weekend\n\n";
cout << "How many students are there ?" << endl << endl;
cin >> numStudents; 
cout<<"enter the number of days a student studies"<<endl;
cin>>n;
for(student = 1; student <= numStudents; student++)
{
total = 0;
for(day = 1; day <= n; day++)
{
cout << "Please enter the number of hours worked by student " 
<< student <<" on day " << day << "." << endl;
cin >> numHours;total = total + numHours;
}
average = total / 3;
cout << endl;
cout << "The average number of hours per day spent programming by "
<< "student " << student << " is " << average
<< endl << endl << endl;
}
return 0;}