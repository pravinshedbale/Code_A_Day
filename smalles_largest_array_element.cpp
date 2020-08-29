#include<iostream>
using namespace std;
int main()
{
	int a[20];
	int s,l=-1,n;
	cout<<"Enter Size : ";
	cin>>n;
	s=a[0];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>l)
			l=a[i];
		if(a[i]<s)
			s=a[i];
	}
	cout<<"Smallest Element : "<<s;
	cout<<"\nLargest Element :"<<l;
	return 0;
}
