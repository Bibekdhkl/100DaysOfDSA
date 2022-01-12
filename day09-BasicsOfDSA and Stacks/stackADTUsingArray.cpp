#include <iostream>

using namespace std;

template <class T>
class stack{
	int size,top;
	T *STACK;
	public:
		stack(int);
		bool isFull();
		bool isEmpty();
		void push(T);
		void pop();
		void display();
		~stack(){
			delete []STACK;
		}
};

template<class T>
stack<T>::stack(int size){
	this->size = size;
	STACK = new T[size];
	top = -1;
}

template<class T>
bool stack<T>::isFull(){
	if(top == size-1)
		return true;
	else
		return false;
}


template<class T>
bool stack<T>::isEmpty(){
	if(top == -1)
		return true;
	else
		return false;
}


template<class T>
void stack<T>::push(T item){
	if(isFull())
		cout<<"Stack Overflow";
	else{
		top++;
		STACK[top]=item;
	}
}


template<class T>
void stack<T>::pop(){
	if(isEmpty())
		cout<<"Stack Underflow";
	else{
		T item;
		item = STACK[top];
		top--;
		cout<<"Popped Item is: " << item <<endl;		
	}
}


template<class T>
void stack<T>::display(){
	if(isEmpty())
		cout<<"Stack is Empty";
	else{
		for(int i = 0;i<=top;i++){
			cout<< STACK[i]<<"  ";
		}
	}
}

int main(){
	int choice,size;
	int value;
	cout<<"Enter the size of stack ";
	cin>>size;
	stack<int> s(size);
	while(1){
		cout<<"\nMenu\n1. Push\n2. Pop\n3. Exit\n";
		cout<<"__________________________________\n";
		cout<<"Stack [size:"<<size<<"]\n";
		s.display();
		cout<<"\n__________________________________\n";
		cout<<"Choose from 1-3\n";
		cin>>choice;
		switch(choice){
			case 1: cout<<"Enter a element to push: ";
				cin >> value;
				s.push(value); 	
				break;
			case 2: s.pop();
				break;
			case 3: exit(0);
			default: cout << "Enter correct options frm 1-3\n";
		}
		cout << "              --                 "<<endl;
	}
	return 0;
}	
