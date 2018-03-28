#include<iostream.h>
#include<string.h>
class student{
private:
	int  id;
	float grade;
	char name[30];
public:
	void info(int i,float g,char n[]){
	id=i;
	grade=g;
	strcpy(name,n);
	}
	void print(){
	cout<<id<<endl<<grade<<endl<<name<<endl;
	}
};
main(){
student s1;
s1.info(10,20,"kinan");
s1.print();
}