#include<iostream.h>
class myclass{
public:
	void cube(float *p){
	*p=*p * *p * *p;

	}
	void input(int *a,int n){
	for(int i=0;i<n;i++)
		cin>>a[i];

	}
	void output(int *a,int n){
	for (int i=0;i<n;i++)
		cout<<a[i]<<endl;
	}
	void oop(int *a,int n){
	int *end,*p,t;
	p=a;
	end=a+n;
	end--;
	while(p<end)
	{
	t=*end;
	*end=*p;
	*p=t;
	end--;
	p++;

	}
	}
};
void main(){
myclass ptr;
float *p,n1=5,o;
p=new float;
ptr.cube(&n1);
cout<<n1<<endl;
cout<<*p<<endl;
ptr.cube(p);
cout<<*p<<endl;
int x[20];
//int *x=new int[];
int n;
cin>>n;
ptr.input(x,n);
ptr.output(x,n);
ptr.oop(x,n);
ptr.output(x,n);

}