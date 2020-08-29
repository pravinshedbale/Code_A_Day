#include<iostream>
using namespace std;
int main()
{
	int a[20];
	int s=0,n;
	cout<<"Enter Size : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	cout<<"Sum of Elements :"<<s;
	return 0;
}
