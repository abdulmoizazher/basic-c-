#include<iostream>
#include<math.h>
using namespace std;
class complex{
    private:
    int real;
    int imaginary;
    public:
    complex (){
        real =0;
        imaginary = 0;
        }
    complex(int x,int y){
        real = x;
        imaginary = y;
    }
    complex(complex& c ){
        real = c.real;
        imaginary = c.imaginary;

    }

    const  void add (complex a){
        complex temp;
        temp.real = this->real + a.real;
        temp.imaginary= this->imaginary + a.imaginary;
       cout<<"the complex number is"<<temp.real<<"i +"<<temp.imaginary<<"j"<<endl;
    }

    
    void print(){
        cout<<"the complex number is"<<real<<"i +"<<imaginary<<"j"<<endl;
    }
    void magnitude(){
        cout<<"the magnitude of the complex number is"<<pow((pow(imaginary,2)+pow(real,2)),0.5)<<endl;
    }

};

int main(){
    
    complex c1(10,10);
    complex c2(c1);
    c1.add(c2);
    c1.magnitude();
    c1.print();
    return 0;
}