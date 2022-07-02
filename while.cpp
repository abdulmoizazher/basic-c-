#include <iostream>
using namespace std;
int main()
{
char letter = 'a';
do
{
cout << "Please enter a letter" << endl;
cin >> letter;

}
while (letter != 'x');
return 0;
}