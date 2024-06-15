#include<stdio.h>
int main()
{
	int arr[]={10,20,36,72,87,20};
	int *j,*k;
	j=&arr[4];
	k=(arr+4);
	if(j==k)
		printf("the two pointes points to the same location\n");
	else
		printf("the two pointes do not points to the same location\n");
}
