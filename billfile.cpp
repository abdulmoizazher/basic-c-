// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.
// Abdul Moiz Azher 
#include <fstream>
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    ifstream datain;
    ofstream dataout;
    float itemprice;
    float totalbill;
    int quantity;
    datain.open("transition.dat");
    dataout.open("bill.out");
    dataout<<setprecision(2)<<fixed<<showpoint;
datain>>itemprice>>quantity;

totalbill=itemprice*quantity;
dataout<<" the total bill is "<<totalbill<<endl;
}