#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head;

struct node* getNode(int);
void insertAtBeg();
void insertAtEnd();
void insertAtPos();
void display();
int main()
{
	head = NULL;
	int ch;
	while(1)
	{
		cout<<"1.INSERT AT BEGINNING"<<endl;
		cout<<"2.INSERT AT END"<<endl;
		cout<<"3.INSERT AT POS"<<endl;
		cout<<"4.DISPLAY"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				insertAtBeg();
				break;
			case 2:
				insertAtEnd();
				break;
			case 3:
				//insertAtPos()
				break;
			case 4:
				display();
				break;
			case 9:
				exit(0);
				break;
		}
	}
	return 0;
}

node* getNode(int data)
{
	struct node *t;
	t = new(struct node);
	if(t!=NULL)
	{
		t->data = data;
		t->next = NULL;
		return t;
	}
}

void insertAtBeg()
{
	int d;
	struct node *t1,*t2;
	cout<<"Enter Element : ";
	cin>>d;
	t1 = getNode(d);
	if(head==NULL)
	{
		head = t1;
		head->next = NULL;
	}
	else
	{
		t2 = head;
		head = t1;
		head->next = t2;
	}
}

void insertAtEnd()
{
	int d;
	struct node *t1,*t2;
	cout<<"Enter Element : ";
	cin>>d;
	t1 = getNode(d);
	if(head==NULL)
	{
		head = t1;
		head->next = NULL;
	}
	else
	{
		t2 = head;
		while(t2->next != NULL)
		{
			t2 = t2->next;
		}
		t2->next = t1;
	}
}
void display()
{
	struct node *t;
	if(head==NULL)
	{
		cout<<"Empty List"<<endl;
		return;
	}
	t = head;
	while(t!=NULL)
	{
		cout<<t->data<<"->";
		t=t->next;
	}
	cout<<endl;
}
