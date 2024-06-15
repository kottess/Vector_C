#include<iostream>
using namespace std;
struct st
{
	private:
	int x,y;
	public:
	void setdata();
	void print();	
};
void st::setdata()
{
	cout<<"Enter x & y data\n";
	cin>>x>>y;	
}
void st::print()
{
	cout<<"x-"<<x<<" y-"<<y<<endl;	
}	
int main()
{
	struct st s1,s2;
	cout<<"s1 data\n";
	s1.setdata();
	s1.print();
	cout<<"s2 data\n";
	s2.setdata();
	s2.print();
	//cout<<"s1.x-"<<s1.x<<"s1.y-"<<s1.y<<endl;
}
