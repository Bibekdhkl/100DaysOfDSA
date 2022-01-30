#include<iostream>

using namespace std;

//function Prototype
int sum(int a,int b){//a and b are formal parametere
	//definition or declaration of the function starts here
	int c;
	c = a+b;
	return c;
}

int main(){
	int x,y,z;
	x = 10;
	y = 11;
	z = sum(x,y);// x and y are actual parameters
	cout << "The sum is = "<<z;
	return 1;
}
