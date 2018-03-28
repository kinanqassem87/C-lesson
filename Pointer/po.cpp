#include<iostream.h>
void main(){
int *p=new int [];
for(int i=0;i<10;i++)
p[i]=i;
for( i=0;i<10;i++)
{//cout<<*(p+i)<<endl;
cout<<p[i]<<endl;}

}