#include<iostream.h>
#include<math.h>
int a,b,c;

void input(){

	cin>>a>>b>>c;
	cout<<"---------------------------"<<endl;

}
void print(){
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
cout<<"---------------------------"<<endl;
}
void root(int a,int b,int c){
	int r1,r2;
	int d=b*b-(4*a*c);
	if(sqrt(d)>=0)
	{
	r1=(-b-sqrt(d))/(2*a);
	r2=(-b+sqrt(d))/(2*a);

	cout<<"r1=  "<<r1<<endl;
	cout<<"r2=  "<<r2<<endl;
	cout<<"---------------------------"<<endl;
	}
	else
		cout<<"error"<<endl;

}
main(){

input();
print();
root(a,b,c);
}