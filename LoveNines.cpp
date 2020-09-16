#include<iostream.h>
#include<conio.h>
int nineCount = 0;
int isNineContain(int n)
{
	while(n>0)
	{
		if(n%10==9)
		{
			return 1;
		}
		n=n/10;
	}
	return 0;
}
int countNines(int n)
{
	int count=0;
	while(n>0)
	{
		if(n%10==9)
		{
			count++;
		}
		n/=10;
	}
	return count;
}
void main()
{
	int n,r,count=0;
	cin>>n;
	int temp = n;
	if(n>=9)
	{
		if(isNineContain(n))
		{
			cout<<countNines(n);
		}
		else
		{
			while(!isNineContain(n)&&n>9)
			{
				n = n-9;
				count++;
			}
			count = count + countNines(n);
			cout<<count;
		}
	}
	getch();
}
