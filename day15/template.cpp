#include<iostream>

using namespace std;

//the scope of template T is from {(starting curly brace) to (ending curly brace) }
template<class T>
class Operation{
      private:
            T a;
            T b;
      public:
            Operation();
            Operation(T a, T b);
            T add();
            T subtract();
};

template<class T>
Operation<T>::Operation(){
      a = b = 1;
}

template<class T>
Operation<T>::Operation(T a, T b){
      //since both parameter and variable has same name so we need to use arrow operator
      this->a = a;
      this->b = b;
}

template<class M>
//M scope starts here
M Operation<M>::add(){
      return a+b;
}
//M scope ends here

template<class N>
N Operation<N>::subtract(){
      return a-b;
}

int main(){
      Operation <int> obj;
      Operation <int> obj1(20,10);
      Operation <float> obj2(2.5,1.5);


      cout<< endl<<"Sum is: "<<obj.add();
      cout<< endl<<"Subtraction is: "<<obj.subtract();
      cout<< endl<<"Sum of int is: "<<obj1.add();
      cout<< endl<<"Subraction of int is: "<<obj1.subtract();
      cout<< endl<<"Sum of float is: "<<obj2.add();
      cout<< endl<<"Subraction of float is: "<<obj2.subtract();

      return 0;

}

