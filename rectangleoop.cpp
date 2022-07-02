#include<iostream>
#include<iomanip>
class rectangle{
    private:
    float lenght;
    float breath;
    public:
    rectangle(){
        lenght = 10;
        breath = 10;
     }
     rectangle(float x , float y){
        lenght = x;
        breath = y;
     }

     void perimeter(){
        float  perimeter;
        perimeter = 2*(lenght+breath);
         std ::cout<<"the preimeter is "<<perimeter<<"\n"<<"\n";
     }
    void area(){
        float area;
        area = lenght*breath;
        std::cout<<"the area is "<<area<<"\n"<<"\n";
    }
};


int main(){
    rectangle r1;
    rectangle r2(21,13.2);
    r1.area();
    r1.perimeter();
    r2.perimeter();
    r2.area();

}

