#include<iostream.h>
class point {
protected:
	int x,y;
public:
	void set_x_y(int a,int b){
	x=a;
	y=b;
	}
	void get_x_y(int &a,int &b){
	a=x;
	b=y;
	}

};
class piont1:public  point{
int z;
public:
void set_z(int a){
z=a;
int a1,b1;
cin>>a1>>b1;
set_x_y(a1,b1);

}
/*void get_z(int &c){
c=z;
int a1,b1;
get_x_y(a1,b1);
cout<<"x= "<<a1<<endl;
cout<<"y= "<<b1<<endl;
}*/

void get_z(int &a,int &b,int &c){
c=z;
get_x_y(a,b);
}
};
void main(){
piont1 p;
int a=10,b,c;
p.get_z(a,b,c);
cout<<a<<endl<<b<<endl<<c<<endl;


}