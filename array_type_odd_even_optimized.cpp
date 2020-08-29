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
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}
	if(even && odd)
		cout<<"Mixed";
	else if(even && !odd)
		cout<<"Even";
	else
		cout<<"Odd";
	return 0;
}
