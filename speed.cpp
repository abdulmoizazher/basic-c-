#include<iostream>
void calculation( float& , float& , float& );
int main(){
    float miles,hours,milesperhour = 0;
    std::cout<<" please enter the miles";
    std::cin>>miles;
    std::cout<<"please enter the hours";
    std::cin>>hours;
    calculation(miles,hours,milesperhour);
    std::cout<< "your speed is "<<milesperhour<<" milesperhour";
}

void calculation(  float& miles,  float& hours , float& milesperhour )
{
    milesperhour = miles/hours;
}