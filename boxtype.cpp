#include<iostream>
class rectangle {
    private:
    int color,lenght ,breath;
    public:

    rectangle(){
        lenght =0;
        breath =0;
        color = 0;

    }
    void getcolor(){
        std :: cout<<"enter the colour";
        std:: cin>>color;
    }

    void setdata(int l, int b ){
      
      lenght = l;

       breath = b;
      
    }
    void display()
{
    std::cout<<lenght<<breath<<std::endl;
}
    int area() const
    {
         
        return lenght * breath;
    }

};

class boxtype : public  rectangle
{
   private:
   int height;
   
   public:
   void setdata(int l, int b, int h ){
    rectangle :: setdata (  l ,b);
     height = h;
   }     

   int volume () const 
   {
    return rectangle ::  area() * height;

   }   

   void display(){
  rectangle :: display();
  std::cout<<height;
   }
} ;



int main (){
    boxtype box;
    box.getcolor();
    box.setdata(10,20,5);
    box.display();
    std:: cout<<"the area of the box is"<<box.area()<<std::endl;
    std:: cout<<"the volume of the box is"<<box.volume()<<std::endl;
    return 0;

}