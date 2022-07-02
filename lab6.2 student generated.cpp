#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::fixed;
using std::endl;
using std::setprecision;
using std:: showpoint;
float kilometers(float);
float miles(float);
int main()
{
int choice;
cout<<fixed<<setprecision(2)<<showpoint; 
 cout<<"Please input"<<"\n"
<<"1 Convert miles to kilometers"<<"\n"
<<"2 Convert kilometers to miles"<<"\n"
 <<"3 Quit"<<endl;
  cout<<"Enter your choice";    

do {

  cin>>choice;
  if (choice == 1){
    float kilometer;
    cout<<"enter the kilometer to be converted";
    cin>>kilometer;
    cout<<kilometer<<"is equal to "<<kilometers(kilometer)<<"miles";}

else if (choice == 2){
    float mile;
    cout<<" enter the miles to be converted";
    cin>>mile;
    cout<<miles<<"is equal "<<miles(mile)<<"kilometers";
}
}
while (choice != 3);
return 0;
}
float miles(float mil)
{
    return 0.621;
   
};
float kilometer(float kilo)
{
    return 1.61*kilo;
}