#include<iostream>
using namespace std;
int main()
{
	int n,a[20],i,j,countR=0,flag=0;
	cout<<"Enter Size of Array : ";
	cin>>n;
	
	cout<<"Enter "<<n<<" Elements : "<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=i+1;j<n;j++)
		{
			if((a[i]^a[j])==0)
			{
				flag = 1;
			}
		}
		if(flag==1)
			countR++;
	}
	if((n-countR*2)<0)
		cout<<"Number of Non Repeating Elements : "<<max(n-countR*2,0);
	else
		cout<<"Number of Non Repeating Elements : "<<n-countR*2;
	return 0;
}
