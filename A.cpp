#include<iostream>
#include<iomanip>
using namespace std;
class A{
    private:
    int x;
    float y;
    public:
    A(){
        x = 0;
        y = 0;
            }
     A(int a,float b){
        x = a;
        y = b;
     }

     A operator+(const A& ) const;

     void print();       
};

 A A::operator+( const A& b ) const{
    A temp;
    temp.x = this->x + b.x;
    temp.y = this->y + b.y;
    return temp;    
 };

void A:: print(){
    cout<<"after performing the addition"<<endl
    <<x<<"and the other is"<<y<<endl;
}
int main()
{
    A k(2,2.3);
    A l(2.0,3.3);
    A p;
    p = k + l;
    p.print();
}