#include<iostream>
float total(float ,float);
float total(float, float ,float);
int main()
{  int num;
float service,test,medicine;
    std::cout<<"Please input a one if you are a member of the dental plan"<<"\n"
"input any other number if you are not";
std::cin>>num;
if (num == 1)
{
    
std::cout<<"Please input the service charge";
std::cin>>service;
std::cout<<"Please input the test charge";
std::cin>>test;
std::cout<<"the total amount is "<<total(service,test);

}
else
{
    std::cout<<"Please input the service charge";
    std::cin>>service;
    std::cout<<"Please input the test charge";
    std::cin>>test;
    std::cout<<"Please input the medicine charge";
    std::cin>>medicine;
    std::cout<<"the total amount is "<<total(service,test,medicine);
    

}
return 0;

}

float total ( float a,float b)
{
    return a+b;
}

float total (float a, float b ,float c){
    return a+b+c;
}