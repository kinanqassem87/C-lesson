#include<iostream.h>
class myclass{
public:
	int a,b;
myclass::myclass (int n,int m){
a=n;
b=m;
}
int get_a(){return a;}
int get_b(){return b;}
};
void main(){
	myclass ab[4]={myclass (1,2),myclass(3,4),myclass(5,6),myclass(7,8)};
	myclass *p;
	p=ab;
	for(int i=0;i<4;i++){
	cout<<(*(ab+i)).get_a()<<"  ";
	cout<<(*(ab+i)).get_b()<<endl;

	}
}