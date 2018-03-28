#include<iostream.h>
class point {
protected:
	int x,y;
public:
	void set_x_y(int a,int b){
	x=a;
	y=b;
	}
	int get_x_y(){
	return x,y;
	}

};
class point1:public  point{
int z;
public:
void set_z(int a){
z=a;
int a1,b1;
cin>>a1>>b1;
set_x_y(a1,b1);

}


int get_z(){
return z;

}
};
void main(){

point1 p;
p.set_z(10);
cout<<p.get_z();


}