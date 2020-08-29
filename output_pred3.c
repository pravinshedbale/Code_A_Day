void main()
{
	int a[5] = {1,2,3,4,5};
	int *p = (&a+1);
	printf("%d",*(a+1));
}
