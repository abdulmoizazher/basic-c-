#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;
void swap(int&, int&);

int main ()
{
    int num1,num2;
    cout<<"Enter the first number"<<"\n"
    <<"then hit enter"<<endl;
    cin>>num1;
    cout<<"Enter the first number"<<"\n"
    <<"then hit enter"<<endl;
    cin>>num2;
    swap(num1,num2);

};

void swap( int& num1, int& num2)
{
    int temp;
    std::cout<<"the first number was"<<num1<<"\n"
    <<"the second number entered was"<<num2<<endl<<endl;
     temp = num1;
     num1= num2;
     num2 = temp;
    std::cout<<"the first number is"<<num1<<"\n"
    <<"the second number entered is"<<num2;
}