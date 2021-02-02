#include <iostream>
using namespace std;

int main(){
	int a =5;
	char b ='A';
	char &c = b;
	int *x ;
	x = &a;
	char *y ;
	y = &b;
	int **z;
	z = &x;
	
	cout << a <<" "<< b << " "<<c<<" "<< x <<" " << (void*)y << " " <<z ;
	cout << "\n" << &a << " " << (void*)&b << " " << (void*)&c << " " << &x << " " << &y << " " << &z;
	c= 'F';
	cout << "\n"<<a <<" "<< b << " "<< c << " "<< x <<" " << (void*)y << " " <<z ;
	*y = 'W';
	cout <<"\n"<< a <<" "<< b << " "<< c << " "<<x <<" " << (void*)y<< " " <<z ;
	*x = 6;
	cout <<"\n"<< a <<" "<< b << " "<< c << " "<< x <<" " << (void*)y<< " " <<z ;
	**z=7;
	cout <<"\n"<< a <<" "<< b << " "<< c << " "<< x <<" " << (void*)y << " " <<z;

	return 0;
}
