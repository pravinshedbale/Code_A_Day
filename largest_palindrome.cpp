#include<iostream>
using namespace std;
int checkPalindrome(int n)
{
	int t = n;
	int r,nn=0;
	while(t>0)
	{
		r = t%10;
		nn = nn*10 + r;
		t=t/10;
	}
	if(nn==n)
		return 1;
	else
		return 0;
}
int main()
{
	int a[20],i,n,l=-1;
	cout<<"Enter Size of Array : ";
	cin>>n;
	
	cout<<"Enter "<<n<<" Elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0 && checkPalindrome(a[i])==1)
		{
			l=i;
		}
		if(i>0 && checkPalindrome(a[i])==1)
		{
			if(a[i]>a[l])
			{
				l = i;
			}
		}
	}
	cout<<"Largest Palindrome is "<<a[l];
	return 0;
}
