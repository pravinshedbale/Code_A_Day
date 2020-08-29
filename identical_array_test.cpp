#include<iostream>
using namespace std;
int main()
{
	int a[20];
	int b[20];
	int flag=0,n;
	cout<<"Enter Size : ";
	cin>>n;
	cout<<"Enter Array 1 :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter Array 2 :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i])
			continue;
		else
			flag=1;
			break;
	}
	if(!flag)
		cout<<"A and B are same array..";
	else
		cout<<"A and B are different array..";
	return 0;
}
