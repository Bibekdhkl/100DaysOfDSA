#include<iostream>

using namespace std;

class Rectangle{
      private:
            int length;
            int breadth;
      public:
            //default Constructor
            Rectangle(){length=breadth=1;}
            //parameterized Constructor
            Rectangle(int l, int b);
            //these functions are also called facilitator
            int area();
            int perimeter();
            //getter
            int getLength(){return length;}
            //setter
            void setLenth(int l){length = l;}
            //destructor
            // ~Rectangle();
};
//to define functions outside class we need to use Scope Resolution Operator
Rectangle ::Rectangle(int l, int b){
                  length = l;
                  breadth = b;
            }

int Rectangle :: area(){
      return length*breadth;
}

int Rectangle :: perimeter(){
      return 2*(length+breadth);
}

int main(){
      Rectangle r(10,5);
      cout<<"Area is: "<<r.area();
      cout<<"\nPerimeter is: "<< r.perimeter();
      r.setLenth(20);
      cout<<endl<<r.getLength();
}