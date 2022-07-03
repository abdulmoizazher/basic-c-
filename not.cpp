#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breath;

    public:
    rectangle(){
        length =0;
        breath =0;
    }
    rectangle(int x,int y){
        length = x;
        breath = y;
    }
     void print(){
        cout<<"the lenght of rectangle is "<<length;
        cout<<"the breath of rectangle is "<<breath;
     }

     bool operator !() ;
};

bool rectangle :: operator!()
{ if (this->length == 0)
    return true;
    else
    return false;
     if (this->breath == 0)
    return true;
    else
    return false;
     
}
int main(){
    rectangle rec1(20,21);
     if (!rec1){
    std :: cout<<"yes";
        }
        else
        {
        std :: cout<<"no";}
    return 0;

}