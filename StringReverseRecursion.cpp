#include<iostream>
using namespace std;

char* strReverse(char *s)
{
	if(*s)
		return strReverse(*(s+1));
	else
		return ;
}

int main()
{
	char *s;
	cout<<"Enter String : ";
	cin>>s;
	cout<<"Original String : "<<s<<endl;
	//cout<<"Reversed String : "<<strReverse(s);
}
