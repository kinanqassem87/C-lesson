#include<iostream.h>
int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
main()
{
	int x,y;
cout<<"inter 0 for First number to exit"<<endl<<endl<<endl;
	while(x!=0)
	{
		
	cout<<"inter the first number"<<endl;
	cin>>x;
	cout<<"inter the second number"<<endl;
    cin>>y;
	cout<<"the max number is : "<<max(x,y)<<endl;
	cout<<"*******************************"<<endl<<endl;
	}
}
