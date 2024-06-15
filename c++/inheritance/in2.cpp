#include<iostream>
using namespace std;
class A
{
	public:
	int x;
};
//class B:protected A
//class B:private A
class B:public A
{
	public:
	int y;
	void setdata()
	{
		x = 10, y = 20;
	}
	void print()
	{
	cout <<"x = " << x << " y = " << y << endl;
	}
};
int main()
{
	B obj;
	obj.x = 11;
	obj.y = 22;
	//obj.setdata();
	obj.print();
}
