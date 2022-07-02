#include<iostream>
using namespace std;
int main(){
    float totalsales, statetaxpercentage, localtaxpercentage;
    cout<<"enter the total sales of company";
    cin>>totalsales;
    cout<<"enter the state tax percentage decimal form";
    cin>>statetaxpercentage;
    cout<<"enter the local tax percentage decimal form";
    cin>>localtaxpercentage;
    cout<<"the total sales are"<<totalsales;
    cout<<"total state tax is "<<statetaxpercentage*totalsales<<endl;
     cout<<"total local tax is "<<localtaxpercentage*totalsales<<endl;
     return 0;}