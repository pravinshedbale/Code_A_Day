#include<stdio.h>
#define max 10
int stack[max];
int top = -1;
int push(int e)
{
	if(top==max)
		return 0;
	else;
		top++;
		stack[top] = e;
		return 1; 
}
int pop()
{
	if(top==-1)
	{
		return -1;
	}
	else
	{
		printf("%d popped out\n",stack[top--]);
		printf("----------------------\n");
	}
	
}

void display()
{
	int i=0;
	if(top!=-1)
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	else
	{
		printf("Stack Underflow...!\n");
		printf("----------------------\n");	
	}
}
void main()
{
	int ch,i,e;
	
	while(1)
	{
		printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
		printf("----------------------------------------\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter Element : ");
				scanf("%d",&e);
				
				if(push(e)!=0)
				{
					printf("%d pushed\n",e);
					printf("----------------------\n");
				}
				else
				{
					printf("overflow...!!\n");
					printf("----------------------\n");
				}
				break;
			case 2:
				if(pop()==-1)
				{
					printf("underflow...!!\n");
					printf("----------------------\n");	
				}
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
}

