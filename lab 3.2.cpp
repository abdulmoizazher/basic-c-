#include <iostream>
using namespace std;
int main(){
    float americancolonail = 85.00;
    float modern = 57.50;
    float frenchcolonail = 127.75;
    int salesofac,saleofm,salesoffc;
    cout<<"enter the number of american colonail ";
    cin>>salesofac;
    cout<<"enter the number of modern";
    cin>>saleofm;
    cout<<"enter the number of french colonail ";
    cin>>salesoffc;
    cout<<" total sales of american colonial"<<americancolonail*salesofac;
    cout<<" total sales of modern"<<modern*saleofm;
    cout<<" total sales of french colonial"<<frenchcolonail*salesoffc;
    return 0;
    
}