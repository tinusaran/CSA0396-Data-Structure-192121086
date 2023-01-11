#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*head = NULL,*p,*t,*newnode;
void Create_SSL()
{
	int ele,i,n;
	printf("Enter the number Elements in your list:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("Enter the Element:");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		p=newnode;
	}
	else
	{
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
	}
}
printf("List successfully created...\n");
}
void Display_SSL()
{
	if(head==NULL)
	printf("List is empty...");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d->",p->data);
	printf("\n");
}
void Insert_at_begin()
{
	int ele;
	printf("Enter the Element to be inserted:");
	scanf("%d",&ele);
	printf("The Element %d has been inserted...\n",ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	p=head;
	head=newnode;
	newnode->next=p;
	p=newnode;
}
void Insert_at_end()
{
	int ele;
	printf("Enter the Element to be inserted:");
	scanf("%d",&ele);
	printf("The Element %d has been inserted...\n",ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
void Insert_at_anypos()
{
	int ele,pos,i;
	printf("Enter the Element to be inserted:");
	scanf("%d",&ele);
	printf("Enter the postion:");
	scanf("%d",&pos);
	printf("The Element %d has been inserted...\n",ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head,i=1;i<pos;p=p->next,i++)
	t=p;
	t->next=newnode;
	newnode->next=p;
}
void Del_at_begin()
{
	int ele;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	p=head;
	head=p->next;
	free(p);
	p=head;
	printf("First Element has been deleted...\n");
}
void Del_at_end()
{
	int ele;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;for(p=head;p->next!=NULL	;p=p->next)
	t=p;
	t->next=NULL;
	free(p);
	p=t;
	printf("Last Element has been deleted...\n");
}
void Del_at_anypos()
{
	int ele,pos,i;
	printf("Enter a position:");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head,i=1;i<pos;p=p->next,i++)
	t=p;
	t->next=p->next;
	free(p);
	p=t;
	printf("Element has been deleted from position %d\n",pos);
}
int main()
{
	int choice;
	do{
		printf("\n1.Create\n2.Display\n3.Insert at begin\n4.Insert at end\n5.Insert at any position\n6.Delete at begin\n7.Delete at end\n8.Delete at any position\n9.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Create_SSL();
			break;
			case 2:Display_SSL();
			break;
			case 3:Insert_at_begin();
			break;
			case 4:Insert_at_end();
			break;
			case 5:Insert_at_anypos();
			break;
			case 6:Del_at_begin();
			break;
			case 7:Del_at_end();
			break;
			case 8:Del_at_anypos();
			break;
			case 9:exit(0);
			default:
			printf("...Wrong choice...\nEnter choice between 1 to 9:");
		}
	}while(choice>0&&choice<=9);
}
