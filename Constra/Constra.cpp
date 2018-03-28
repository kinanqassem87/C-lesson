#include<iostream.h>
class exa{
public:
	exa(){cout<<"no para"<<endl;}
	exa(int i){cout<<"one"<<i<<endl;}
	exa(int i,int j){cout<<"two"<<i<<j<<endl;}
};
 main(){
exa no=exa();
exa one=exa(10);
exa two=exa(10,20);

}