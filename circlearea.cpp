//this program will output circumfrence and area 
//of circle with radius 
// Abdul MOiz Azher 


#include <iostream>
using namespace std;
const double pi = 3.142;
const double Radius = 5.4;
int main(){
    double area; // definition of area of circle
    int curciumfrence;  // definition of circumference
    curciumfrence =2*pi*Radius;
    area = pi *Radius* Radius;
    cout<<"curcuimfrence="<<curciumfrence<<"\n";
    cout<<"area="<<area;
    return 0;
}