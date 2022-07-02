// This program illustrates the use of the switch statement.
// abdul moiz azher 
#include <iostream>
using namespace std;
int main()
{
char grade;
cout << "What grade did you earn in Programming I ?" << endl;
cin >> grade;

if (grade == 'A'){
cout << "an A - excellent work !" << endl;
cout<<" you passed";}
 else if ( grade == 'B'){
cout << "you got a B - good job" << endl;
cout<<" you passed";}
 else if ( grade == 'C'){
 cout << "earning a C is satisfactory" << endl;
cout<<" you passed";}
else if ( grade == 'd'){
cout << "while D is passing, there is a problem" << endl;
cout<<" you passed";}
else if( grade == 'F'){
cout << "you failed - better luck next time" << endl;}
else{
cout << "You did not enter an A, B, C, D, or F" << endl;
}
return 0;}
