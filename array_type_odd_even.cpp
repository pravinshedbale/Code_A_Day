#include<iostream>
using namespace std;
int main()
{
	int a[20];
	int flag=0,even=0,odd=0,n;
	cout<<"Enter Size : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			even=1;
		else
			odd=1;
		if(even==odd)
		{
			flag = 1;
			break;
		}
	}
	if(flag)
		cout<<"Array is Mixed";
	else if(even==1 && odd==0)
		cout<<"Array is Even";
	else
		cout<<"Array is Odd";
	return 0;
}
