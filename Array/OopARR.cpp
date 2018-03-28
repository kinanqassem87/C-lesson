#include<iostream.h>

class mat {
private:
	int *a , n ;
public:
	mat::mat( int k=1 ,  int *x=1  ) 
			
	{ 
		cout<< "cons" ;
		n = k ; 
	for ( int i=0 ; i< n ; i++ )
		*(a+i) = *(x+i);

	}
void set ( int k , int *x  ) 
	{ n = k ; 
	for ( int i=0 ; i< n ; i++ )
		*(a+i) = *(x+i);
	}
void print ()
{ for (int i=0; i<n ; i++ )
cout<< a[i]; }
mat operator -- ()
{
 for (int i=0; i<n ; i++ )
	 a[i]--;
 return *this;
}};
void main ()
{ int a,b;
cin>> a ;
int *s;
	mat (a,s) ;
cout<<a<<endl;
	
}