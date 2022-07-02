// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.
// Abdul Moiz Azher
#include <iostream>
using namespace std;
int main()
{
int month = 1;
float total = 0, rain;
cout << "Enter the total rainfall for month " << month << endl;
cout << "Enter -1 when you are finished" << endl;
cin>>rain;
while (rain != -1)
{
total = total + rain;
month++;
cout << "Enter the total rainfall in inches for month "
<< month << endl;
cout << "Enter -1 when you are finished" << endl;
cin>>rain;}

if (month == 1){
cout << "No data has been entered" << endl;}
else
{cout << "The total rainfall for the " <<month-1
<< " months is "<< total << " inches." << endl;}
return 0;
}