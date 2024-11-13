#include<stdio.h>
#include<stdlib.h>
void start();
/*
void input(int,int);
void multiply(int, int, int);
*/
void main()
{
	printf("Welcome to Matrix Multiplication Software");
	printf("\nThis tool is developed by Akshat Deshmukh using C language.\n...................................................\n");
	start();
}
void start()
{

	int M1_R,M1_C,M2_R,M2_C;
	printf("Enter size of the matrix 1 in the following format:\n(eg.: if rows=2 and column=3 enter as 2 3)\n");
	scanf("%d",&M1_R);
	scanf("%d",&M1_C);

	printf("Enter size of the matrix 2 in the same format:\n");
	scanf("%d",&M2_R);
	scanf("%d",&M2_C);
	
	if(M1_C!=M2_R)
	{
		printf("\fIncompatible for multiplication.\nPlease re-enter the sizes.......................\n\n");
		start();
		exit(0);
	}

	printf("\fEnter the elements of Matrix 1:\n");
	int A[M1_R][M1_C];
	
	int i,j;
	for(i=0;i<M1_R;i++)
	{	
		printf("ROW %d\n",i+1);
		for(j=0;j<M1_C;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	
	printf("Enter the elements of Matrix 2:\n");
	int B[M2_R][M2_C];
	for(i=0;i<M2_R;i++)
	{	
		printf("ROW %d\n",i+1);
		for(j=0;j<M2_C;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	
	printf("\nMULTIPLYING MATRICES...\n");
	int k=0,i1,i2,j1,j2;
	int C[M1_R][M2_C];
	for(i=0;i<M1_R;i++)
	{
		for(j=0;j<M2_C;j++)
		{
			C[i][j]=0;
			k=0;
			while(k<M1_C)
			{
				C[i][j]+=A[i][k]*B[k][j];
				k=k+1;
			}
			
		}
	}
	
	printf("\nPRODUCT MATRIX:\n");
	for(i=0;i<M1_R;i++)
	{	
		for(j=0;j<M2_C;j++)
		{
			printf("%d\t",C[i][j]);
			
		}
		printf("\n");
	}
	
	
	//multiply(A,B,siz);
	
	
}
/*
void input(int n[][],int s)
{
	
}
void multiply(int A[][],int B[][],int s)
{
	int k=0,i,j;
	int C[s][s];
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			j1=0,i2=0;
			while(j1<s || i2<s)
			{
				C[i][j]+=A[i][j1]*B[i2][j];
				j1=j+1
				i2=i2+1
			}
		}
	}
	
	printf("PRODUCT ARRAY:\n");
	for(i=0;i<s;i++)
	{	
		for(j=0;j<s;j++)
		{
			scanf("%d ",&C[i][j]);
			
		}
		printf("\n");
	}
}
*/
