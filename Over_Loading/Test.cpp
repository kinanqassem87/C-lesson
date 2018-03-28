#include<iostream.h>
class myclass{

public:
	int x,y;
	myclass(int a,int b):x(a),y(b){cout<<"constructor"<<endl;}
	myclass operator +(myclass p1){
	int x1=x+p1.x;
	int y1=y+p1.y;
	return myclass(x1,y1);
	}
	

};
void main(){
myclass p1(10,10),p2(11,11),p3(0,0);
 p3=p1+p2;
cout<<p3.x<<endl;
cout<<p3.y<<endl;

}