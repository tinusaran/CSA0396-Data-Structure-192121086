#include<stdio.h>
void Array_ins()
{
	int ele,pos,i,arr[100],n;
	printf("Enter the size of your array:");
	scanf("%d",&n);
	printf("Enter the elements of your array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position to be inserted:");
	scanf("%d",&pos);
	printf("Enter the value to be inserted:");
	scanf("%d",&ele);
	{
		for(i=n;i>pos;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[pos]=ele;
	}
	for(i=0;i<=n;i++)
	printf("%d\t",arr[i]);
	
}
void Array_del()
{
	int pos,i,arr[100],n;
	printf("Enter the size of your array:");
	scanf("%d",&n);
	printf("Enter the elements of your array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position to be deleted:");
	scanf("%d",&pos);
	{
		for(i=pos;i<n-1;i++)
		{
			arr[i]=arr[i+1];
			for(i=0;i<n-1;i++)
			printf("%d\t",arr[i]);
		}
	}
}
void Array_dis()
{
	int pos,i,arr[100],n;
	printf("Enter the size of your array:");
	scanf("%d",&n);
	printf("Enter the elements of your array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("***Your array***");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
int main()
{
	int choice;
	printf("1.Insertion\n");
	printf("2.Deletion\n");
	printf("3.Display\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				Array_ins();
				break;
			}
		case 2:
			{
				Array_del();
				break;
			}
		case 3:
			{
				Array_dis();
				break;
			}
	}
}
