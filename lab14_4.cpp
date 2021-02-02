#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a, int &b, int &c, int &d){
	int array[4] = {a,b,c,d};
	int w,x,y,z;
	do{
		w= array[rand() % 4];
		x= array[rand() % 4];
		y=array[rand() % 4];
		z=array[rand() % 4];
		
	}while(w==x || w==y || w==z || x==y || x==z || y==z);
	a=w;
	b=x;
	c=y;
	d=z;
}
