#include<iostream>
using namespace std;
struct st
{
	int x,y;
	void setdata()
	{
		cout<<"Enter x & y data\n";
		cin>>x>>y;	
	}
	void print()
	{
		cout<<"x-"<<x<<" y-"<<y<<endl;	
	}
};
int main()
{
	struct st s1,s2;
	cout<<"sizeof s1-"<<sizeof(s1)<<"sizeof s2-"<<sizeof(s2)<<endl;
	cout<<"s1 data\n";
	s1.setdata();
	s1.print();
	cout<<"s2 data\n";
	s2.setdata();
	s2.print();
}
