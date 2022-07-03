#include<iostream>
class abc{
    private:
    int a;
    int b;
    public:
    abc(){
        a = 0;
        b = 0;
    }
    abc(int x,int y){
      a = x;
      b = y;
    }
    abc operator++();
    abc operator++(int);
   friend std::ostream& operator<<(std::ostream &output, const abc& var);

};

abc abc :: operator++(){
   this->a+=1;
   this->b+=1;
  return *this;
  }
  abc abc :: operator++(int){
    abc temp = *this;
    this->a+=1;
    this ->b+=1;
    return temp;
  }


std::ostream& operator<<(std::ostream &output, const abc& var )
{
     output<<"a = "<<var.a<<std::endl
     <<"b = "<<var.b<<std::endl;
     return output;

}
int main(){

  abc pol(2,3);
  std::cout<<"defualt value"<<std::endl;
  std::cout<<pol;
  std::cout<<pol++;
  std::cout<<"after post increment"<<std::endl;
  std::cout<<pol;
  std::cout<<"pre increment"<<std::endl;
  std::cout<<++pol;
  return 0;
}