#include<iostream>
using namespace std;
int main()
{
	int **p,**q,**m;
	int i,j,k,r,c;
	cout<<"Enter the row and column\n";
	cin>> r >> c;
	p=new int*[r];
	for(i=0;i<r;i++)
		p[i]= new int[c];
	
	q=new int*[r];
	for(i=0;i<r;i++)
		q[i]= new int[c];

	m=new int*[r];
	for(i=0;i<r;i++)
		m[i]= new int[c];

	cout<<"Enter the 1st matrix elements\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"p["<<i<<"]"<<"["<<j<<"]-";
			cin>>p[i][j];
		}
	}
	cout<<"Enter the 2nd matrix elements\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"q["<<i<<"]"<<"["<<j<<"]-";
			cin>>q[i][j];
		}	
	}
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<c;k++)
				m[i][j]+=p[i][k]*q[k][j];
		}	
	}
	cout<<"Matrix multiplication\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<"  "<<m[i][j];
		cout<<endl;	
	}
	for(i=0;i<r;i++)
	{
		delete []p[i];
		delete []q[i];
		delete []m[i];
	}
	delete []p;
	delete []q;
	delete []m;
}
