#include<iostream.h>
int cube(int x)
{
	return x*x*x;
}
main()
{
	int x=1;
	while(x!=0)
	{
	cout<<"inter the number\n";
		cin>>x;
		cout<<cube(x)<<endl;
	}
}
