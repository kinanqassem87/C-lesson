#include<iostream.h>
#include<string.h>
#include<stdio.h>


void  getarray(double a[],char name[] ,int n){
	for (int i=0; i<n; i++){
		cout<<"inter the name of student\t";
		cin>>name[i];
		
m:	cout<<"enter a["<<i<<"] =";
	cin>>a[i];
	if(a[i]>100||a[i]<0)
	{
	cout<<"invalid mark\n";
	goto m;
	}
	
	cout<<endl;
	}
}
void pri(double a[],char name[], int n){
	for(int i=0; i<n; i++){
		cout<<"name["<<i<<"]=\t"<<name[i]<<endl;
	cout<<"a["<<i<<"] ="<<a[i]<<endl;
	}
}
double max(double a[] ,int n){
double m=a[0];
for (int i=1; i<n ; i++){
	if(m<a[i])
		m=a[i];
}
return m ;
}
double min(double a[] ,int n){
double m=a[0];
for (int i=1; i<n ; i++){
	if(m>a[i])
		m=a[i];
}
return m ;
}
int p(double a[],int n){
	int k=0;
	for(int i=0; i<n; i++){
	if(a[i]>=50)
		k++;
	}
	return k;
}
double av(double a[],int n){
double sum=0;
for(int i=0; i<n; i++){
sum+=a[i];
}
return sum/n;
}
void main(){
	int n;
	double m;
double mi;
	double a[100];
	char name[100];
	cout<<"number of students :\n";
	cin>>n;
	getarray(a,name,n);
pri(a,name,n);
m= max(a, n);
cout<<"the max number is :\t"<<m<<endl;
mi= min(a, n);
cout<<"the min number is :\t"<<mi<<endl;
cout<<"the number of passers is :\t"<<p(a, n)<<endl;
cout<<"the avrage of student mark is :\t"<<av(a, n)<<endl;
}