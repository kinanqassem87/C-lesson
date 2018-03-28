#include<iostream.h>
class arry{
private:
	int a[100];
	int n;
public:
	void set_a(int x[100]){
	a[100]=x[100];
	}
	void set_n(int l){
		n=l;}
	void input(){
	for(int i=0;i<n;i++)
		cin>>a[i];
	}
	void output(){
	for(int i=0;i<n;i++)
		cout<<a[i];
	}
};
main(){
arry a;
int s[100];
int n;
cin>>n;
a.set_a(s);
a.set_n(n);
a.input();
a.output();
}