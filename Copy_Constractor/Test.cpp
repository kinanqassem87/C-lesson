#include<iostream.h>
class myclass{
int n,m;
public:
	myclass(int n1=1,int m1=1):n(n1),m(m1){cout<<"constractor"<<endl;}
	myclass(const myclass &c):n(c,n),m(c,m){cout<<"copy constarctor"<<endl;}
	int get_n(){return n;}
	int get_m(){return m;}
/*	myclass f(myclass c){
	myclass *temp= new myclass;
	temp->n=c.n++;
	temp->m=c.m++;
	return *temp;
	}*/
	myclass & f (myclass &c)
	{	myclass *temp;
	return *temp;}
	void f(myclass &c,myclass &d){
	n=c.n+d.n;
	m=c.m+d.m;
	}

};
void main(){
int w=20,k(w);
cout<<"w="<<w<<"k="<<k<<endl;
myclass x,y(22,33),z(y);
// z(y);
cout<<x.get_n()<<endl;
cout<<x.get_m()<<endl;
cout<<y.get_n()<<endl;
cout<<y.get_m()<<endl;
cout<<z.get_n()<<endl;
cout<<z.get_m()<<endl;
z=x.f(y);
//cout<<x.get_n()<<endl;
//cout<<x.get_m()<<endl;
cout<<z.get_n()<<endl;
cout<<z.get_m()<<endl;
z.f(x,y);
cout<<z.get_n()<<endl;
cout<<z.get_m()<<endl;

}