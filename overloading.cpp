#include<iostream>
using namespace std;
class rectangle{
    private:
    int lenght;
    int breath;
    public:
    rectangle(){
        lenght = 0;
        breath = 0;
    }
    rectangle(int x, int y){
        lenght = x;
        breath = y;
            }
     friend ostream& operator<<(ostream &output, const rectangle &rec);
     friend istream& operator>>(istream &input, rectangle &rec );       

};

istream  &operator>>(istream &input,  rectangle &rec){
    input>>rec.lenght>>rec.breath;
    return input;
}



ostream &operator<<(ostream& object , const rectangle &rec)
{
           object<< "the lengt is "<<rec.lenght<<endl
           <<" the breath is "<<rec.breath;
           return object;

}

int main(){
    rectangle rec1(10,14),rec2;
    cout<<"enter the data for object";
    cin>>rec2;
    cout<<rec1<<endl<<rec2;
    return 0;

}