#include<iostream>
class empoly{
    private:
    int empolyno;
    float employcompensation;

    public:
    void setdata(int x,float y){
        empolyno = x;
        employcompensation = y;

    }
void dispalydata(){
    std::cout<<"the employnumber is "<< empolyno << "\n";
    std :: cout<<"the employment compensation is "<< employcompensation;

}

};
int main(){
    empoly e1;
    e1.setdata(10,0.36);
    e1.dispalydata();
    return 0;
}