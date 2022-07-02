#include<iostream>
using namespace std;
int main(){
    char c; 
    cout<<"enter the alphebat";
    cout<<"press enter"<<"\n";
    cin>>c;
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
    
    {
         cout<<"your aplabet is a vowel";
    }
 else{
      cout<<"your aplabet is not  a vowel";
 }
 return 0;
}