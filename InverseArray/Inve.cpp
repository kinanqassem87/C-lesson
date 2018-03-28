#include<iostream.h>
int const m=3;
int i,k,a[m],b[m];
void invers(){
	 k=m-1;
	for(i=0;i<m;i++){
	b[i]=a[k--];
	}
}
void main(){
	for(i=0;i<m;i++){
	cout<<"a["<<i+1<<"]=";
		cin>>a[i];
	cout<<endl;
	}
	cout<<"----------"<<endl;
for(i=0;i<m;i++){
	cout<<"a["<<i+1<<"]="<<a[i]<<endl;
	}
cout<<"----------"<<endl;
invers();
for(i=0;i<m;i++){
		cout<<"b["<<i+1<<"]="<<b[i]<<endl;
	}
}