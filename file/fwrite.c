#include<stdio.h>
int main()
{
	char ch='A';
	int x=1234;
	float f=22.7;
	char a[20]="vector";
	FILE *fp=fopen("data.txt","w");
	fwrite(&ch,sizeof(char),1,fp);
	fwrite(&x,sizeof(int),1,fp);
	fwrite(&f,sizeof(float),1,fp);
	fwrite(a,sizeof(char),20,fp);
}
