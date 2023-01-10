 #include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],row1,column1,i,j,k;
	printf("Enter the number of rows and columns in matrix 1...\n");
	scanf("%d%d",&row1,&column1);
	int row2,column2;
	printf("Enter the number of rows and columns in matrix 2...\n");
	scanf("%d%d",&row2,&column2);
	printf("Enter the Elements of matrix 1...\n");
	for(i=0;i<row1;i++)
	for(j=0;j<column1;j++)
	scanf("%d",&a[i][j]);
	printf("Enter the Elements of matrix 2...\n");
	for(i=0;i<row2;i++)
	for(j=0;j<column2;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<row1;i++)
	for(j=0;j<column2;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<row1;i++)
	for(j=0;j<column2;j++){
		c[i][j]=0;
		for(k=0;k<column1;k++)
		c[i][j]=c[i][j]+a[i][j]*b[i][j];
	}	
	printf("Product of the two matrices...\n");
	for(i=0;i<row1;i++){
	for(j=0;j<column2;j++){
	printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}
