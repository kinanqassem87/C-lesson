#include<iostream.h>
class myclass {
int i;
public:
	myclass(int j=2):i(j){} 

	int get_i(){
	return i;
	}
	int sqr(myclass m){
	int t=m.i*m.i;
	m.i++;
	return t;
	}
int sqr(){
	int t=i*i;
	i++;
	return t;
	}


};
void main(){
myclass a,b(10),c(5);
cout<<a.get_i()*a.get_i()<<endl;
cout<<b.sqr()<<endl;
cout<<b.get_i()<<endl;
cout<<c.sqr(b)<<endl;
cout<<b.get_i()<<endl;
}