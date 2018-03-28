#include<iostream.h>
void main(){
int n;int sum=0;
cout<<"enter the num";
cin>> n;
for(int i=1; i<=n; i+=2){
sum+= i*i;
}
cout<<"sum is "<< sum;
}