#include<stdio.h>
int calE(int n, int p)
{
	static int step=0;	
	if(p==1)
	{
		step++;
		printf("%d steps required\n",step);
		return n;
	}
	else if(p%2 == 0)
	{
		step++;
		return calE(n*n,p/2);
	}
	else
	{
		return n*calE(n,p-1);
	}
	
}
void main()
{
	int n = 2;
	int p = 10 ;
	
	printf("%d to the power of %d is %d",p,n,calE(n,p));
}

