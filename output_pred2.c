void main()
{
	int s=0,f=1,i=1,n=20;
	while(i<=n)
	{
		f=f*i;
		s=s+(i/f);
		i=i+1;
	}
	printf("%d",s);
}
