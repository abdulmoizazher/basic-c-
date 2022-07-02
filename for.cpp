// This program has the user input a number n and then finds the
// mean of the first n positive integers
// Abdul Moiz Azher 
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
int total = 0; // total holds the sum of the first n positive numbers
int number; // the amount of numbers
float mean;
int n,m; 
cout << "Please enter the first  positive integer" << endl;
cin >> n;
cout << "Please enter the first  positive integer" << endl;
cin >> m;
if (n > 0)
{
for (number = n; number <= m; number++)
{
total = total + number;
} // curly braces are optional since there is only one statement 
// operator here
cout<<fixed<<showpoint<<setprecision(2);
mean  = static_cast<float>(total)/ (m-n+1);
cout << "The mean average of the numbers  " <<n <<" and "<< m 
 <<" positive integers is " << mean <<endl; 
}
else 
cout << "Invalid input - integer must be positive" << endl;
return 0;
}
