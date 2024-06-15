#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,k,r,c;
printf("Enter the rows & cols\n");
scanf("%d%d",&r,&c);

int **p=(int **)malloc(r*sizeof(int *));
for(i=0;i<r;i++)
	p[i]=(int *)malloc(c*sizeof(int ));

int **q=(int **)malloc(r*sizeof(int *));
for(i=0;i<r;i++)
	q[i]=(int *)malloc(c*sizeof(int ));

int **m=(int **)malloc(r*sizeof(int *));
for(i=0;i<r;i++)
	m[i]=(int *)malloc(c*sizeof(int ));
printf("Enter the matrix 1 element\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	scanf("%d",&p[i][j]);
}
printf("Enter the matrix 2 element\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	scanf("%d",&q[i][j]);
}

printf("Matrix 1\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	printf("%d ",p[i][j]);
	printf("\n");
}
printf("Matrix 2\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	printf("%d ",q[i][j]);
	printf("\n");
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		for(k=0;k<c;k++)
		m[i][j]+=p[i][k]*q[k][j];
	}
}

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	printf("%d ",m[i][j]);
	printf("\n");
}
for(i=0;i<r;i++)
{
	free(p[i]);
	free(q[i]);
	free(m[i]);
}
free(p);
free(q);
free(m);
}

