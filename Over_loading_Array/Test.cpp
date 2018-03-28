#include<iostream.h>
class myclass{
public:
	int x,y;
	myclass(int a,int b):x(a),y(b){}
int operator [](int index){
if (index==0)
return x;
else if (index==1)
return y;
}};
void main(){
myclass m(1,2);
cout<<m[1]<<endl;
 
}