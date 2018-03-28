#include<iostream.h>
void swap(int &x,int &y){
cout<<x<<"  "<<y<<endl;
int temp;
temp=x;
x=y;
y=temp;
cout<<"After swap"<<endl;
cout<<"in swap"<<endl<<x<<"  "<<y<<endl;
}
void main(){
	
int x=5,y=10;


swap(x,y);
cout<<"in main"<<endl<<x<<"   "<<y<<endl;
}