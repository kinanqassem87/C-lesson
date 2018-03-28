#include<iostream.h>
int o=5;
int call(int m){
m*=m;
o*=o;
return m;
}
main(){
int k=5;
int x=call(k);
cout<<o<<"   "<<k<<endl;
}