#include<iostream>
using namespace std;
class A
{
	private:
	int x;
	public:
	void set_x()
	{
		x = 10;
	}
	void print_x()
	{
		cout <<"x = " << x << endl;
	}
};
class B:public A
{
	public:
	int y;
	void set_y()
	{
		y = 20;
	}
	void print_y()
	{
		cout <<"y = " << y << endl;
	}
};
int main()
{
	B obj;
	cout <<"size obj : " << sizeof obj << endl;
	obj.set_x();
	obj.print_x();
	obj.set_y();
	obj.print_y();
}
