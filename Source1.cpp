
int  bonus( int a){
    if( a < 5){
        return (a* 1000)/12;
    } 
    if (a > 5){
        return (2000*a)/12;
    }
}
int  additionalbonus( int b){
    if( 50000<b && b>100000 ){
        return b*0.3;
    }
    if (b >100000){
        return b*0.6;
    }
}
#include<iostream>
using namespace std;

int main()
{ int salary;
  int years;
  int sales ;
  int totalsalary;
     cout<<"enter the  basic salary";
 cin >>salary;
cout <<"enter the years";
  cin>>years;
 cout <<"enter the sales done in this mounth";
  cin >>sales;
int a = bonus(years);
int b = additionalbonus(sales);
totalsalary = salary + a + b ;
cout<<"the total salary is " << totalsalary;
 return 0;}
  