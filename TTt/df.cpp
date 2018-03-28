#include<iostream.h>
#include<string.h>

void main(){
char s[]="abc";
char s1[]="defg";
for(int i=0 ; i<4 ; i++){
cout<<"s["<<i<<"]="<<s[i]<<endl;
}
cout<<strlen(s)<<endl;
strcpy(s1,s);
cout<<s1<<endl;
strcat(s,s1);
cout<<s<<endl;
}
