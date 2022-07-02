
#include<iostream>
using namespace std;
class double{
public:
    int num;
    void number( int num){
        cout<<num*2;
    }
};

int main(){

int mynumber; 
cout<<"enter a number";
cin>>mynumber;
 double object;
 object.number(mynumber);
 return 0;

}