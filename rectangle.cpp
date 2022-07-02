// Abdul Moiz Azher
//this program calculates the area and perimeter of a rectangle and display the answer
#include <iostream>
using namespace std;
int main(){
  const float lenght =8;
  const float width =3;
  float area,perimeter;
  area=lenght*width;
  perimeter = 2*(lenght+width);
cout<<"the area of rectangle"<<area<<"\n";
cout<<"the perimeter of rectangle is "<< perimeter;
return 0;

}