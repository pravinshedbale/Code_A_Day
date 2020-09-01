#include<iostream>
using namespace std;
int main()
{
	int a[20],temp,n,i,j;
	cout<<"Enter Size : ";
	cin>>n;
	cout<<"Enter "<<n<<" Elements :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted Array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
