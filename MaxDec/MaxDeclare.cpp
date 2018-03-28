#include<ioStream.h>
int max(int x,int y);
main()
{
	int x,y;
	
	cout<<"inter the first number"<<endl;
	cin>>x;
	cout<<"inter the second number"<<endl;
    cin>>y;
	cout<<"the max number is : "<<max(x,y)<<endl;
}
int max(int x,int y)
{
	if(x>y)
		return x;
	else 
		return y;
}