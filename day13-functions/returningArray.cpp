//returning array from a function
#include<iostream>

using namespace std;

int * funcn(int size){
	int *p;
	p = new int[size];
	
	for(int i = 0;i<size;i++)
		p[i]=i+1;
	
	return p;
}

int main(){
	int *ptr, s = 5;
	ptr = funcn(s);
	for(int i =0; i<s;i++)
		cout<<endl<<ptr[i];
	return 0;
}
