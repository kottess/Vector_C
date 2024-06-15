#include<iostream>
using namespace std;
int main()
{
	int **p;
	int i,j,r,c;
	cout <<"Enter the no.of rows & cols" << endl;
	cin >> r >> c;
	p = new int*[r]; //array of pointer
	for(i=0;i<r;i++)
		p[i] = new int[c]; //1D memory allocation.cout <<"Enter the elements" << endl;
	for(i=0;i<r;i++)
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cin >> p[i][j];
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout << p[i][j] << endl;
	}
	for(i=0;i<r;i++)
	delete []p[i];
	delete []p;
}
