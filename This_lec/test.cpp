#include<iostream.h>
class counter{
protected:
	int c;
public:
	counter(int j=0):c(j){};
	int get_counter(){
	return c;
	}
	counter operator ++(){
	c++;
	return *this;
	}


};
class d_count:public counter {
public:

//	d_count(int n=0):c(n){};
	d_count operator --(){
	c--;
	return *this;
	}
};
void main(){
d_count c1,c2;
cout<<c1.get_counter()<<endl;
cout<<c2.get_counter()<<endl;
c1++;
c2--;
cout<<"after"<<endl;
cout<<c1.get_counter()<<endl;
cout<<c2.get_counter()<<endl;

}