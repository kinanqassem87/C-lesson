#include<iostream.h>
int i=5,j=10;
void swap(int x,int y){
int temp;
temp=x;
x=y;
y=temp;
}
void main(){
	
	cout<<i<<"   "<<j<<endl;
	swap(i,j);
	cout<<i<<"   "<<j<<endl;
	
}