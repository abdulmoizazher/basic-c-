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

     bool operator != (const rectangle& ) const;
};

bool rectangle :: operator !=(const rectangle&  rec) const
{
    return (length != rec.length || breath != rec.breath);

}
int main(){
    rectangle rec1(20,21);
    rectangle rec2( 50, 60);
    if ( rec1 != rec2){
    std :: cout<<"the objects are not equal";
    };
    return 0;

}