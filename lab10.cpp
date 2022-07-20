#include<iostream>
class person{
    public:
     int age;
     char gender;
     person(){
        age =0;
        
     }

     void get_gender(){
        std::cout<<"enter your gender M for male anf F for female";
        std::cin>>gender;
        
     }
};

class employee :  public person
{
    protected:
    int employeer_id;
    double salary;
    public:
    char name[20];

    void get_data(){
        std::cout<<"enter your name";
        std::cin>>name;
        std::cout<<"enter your Employeer_id";
        std::cin>>employeer_id;
        std::cout<<"enter  your salary";
        std::cin>>salary;
        std::cout<<"enter your age";
        std::cin>>age;
        std::cout<<"enter your gender";
        std::cin>>gender;
    }

    void print_data(){
        std::cout<<"your name is "<<name<<"\n";
        std::cout<<"your Employeer_id is"<<employeer_id<<"\n";
        std::cout<<"your salary is "<<salary<<"\n";
        std::cout<<"your age is "<<age<<"\n";
        std::cout<<"your gender is "<<gender<<"\n";

    }
};


class faculty : public employee
{
    public:
    char department[30];
    char  qualification[30];

    faculty(){
        
    } 
    void get_data()
    {   employee::get_data();
        std::cout<<"enter the qulification";
        std::cin>>department;
        std::cout<<"enter the department";
        std::cin>>department;


    }
};

class lecturer : public faculty
{    
    public:
    char specilization[20];
    char experience[20];
    lecturer (){

    }
    void get_data(){
        faculty::get_data();
        std::cout<<"enter specilization";
        std::cin>>specilization;
        std::cout<<"enter experience";
        std::cin>>experience;

    }

    void print_data(){
        faculty::print_data();
        std::cout<<"your specilization is "<<specilization<<"\n";
        std:: cout<<" your experience is "<<experience<<"\n";
    }


};


 int main ()
 {   
    lecturer l1;
    l1.get_data();
    l1.print_data();
    return 0;
 }