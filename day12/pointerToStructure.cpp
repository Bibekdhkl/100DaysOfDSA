#include<iostream>
// #include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
      int length;
      int breadth;
};

int main(){
      // simple struct object
      struct Rectangle rect ={10,11};
      cout<<rect.length<<endl;
      cout<<rect.breadth<<endl;
      
      //using pointer as an object
      struct Rectangle *p;
      p->length = 10;
      p->breadth = 20;
      cout<<(*p).length<<endl;
      cout<<(*p).breadth<<endl;

      // using object in heap 
      Rectangle *point;
      // point = (struct Rectangle*)malloc(sizeof(struct Rectangle));
      point = new Rectangle;
      point->length = 10;
      point->breadth = 20;
      cout<<point->length<<endl;
      cout<<point->breadth<<endl;
      // delete(point);
      free(point);

      return 1;
}