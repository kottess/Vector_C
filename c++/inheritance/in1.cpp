#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	void set_x(int a)
	{
		x = a;
	}
	void print_x()
	{
		cout << "x = " << x << endl;
	}
};
class B : public A
{
	public:
	int y;
	void set_y(int a)
	{
		y = a;
		}
	void print_y()
	{
		cout << "y = " << y << endl;
	}
};
int main()
{
	B b;
	b.set_x(10);
	b.set_y(20);
	b.print_x();
	b.print_y();
}
