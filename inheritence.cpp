#include<iostream>

class student{
    protected:
    int age,usn;
    char name[20];

};

class ug : public student{
    int sem,fee,sti;
    public:
    void getdata()
    {
        std::cout<<"enter the name";
        std::cin>>name;
         std::cout<<"enter the age";
        std::cin>>age;
        std::cout<<"enter the sem";
        std::cin>>sem;
    }
    void display()
    {
      std::cout<<name<<"\n"<<age<<"\n"<<sem<<"\n";

    }

    int getsem()
    {
        return (sem);

    }

     int getage()
    {
        return (age);
    }
};

class pg : public student{
    int sem,fee,sti;
    public:
    void getdata()
    {   
        std::cout<<"enter the name";
        std::cin>>name;
        std::cout<<"enter the age";
        std::cin>>age;
        std::cout<<"enter the sem";
        std::cin>>sem;
        std::cout<<"enter the fees";
        std::cin>>fee;
       
    }
     void display()
    {
      std::cout<<name<<"\n"<<age<<"\n"<<sem<<"\n";
    }
};
int main()
{
   pg p2;
   ug u2;
   p2.getdata();
   p2.display();
   u2.getdata();
   u2.display();
   return 0;
}