#include<iostream>
using namespace std;
class Base
{
	public:
	int x;
};
class Derived:public Base
{
	public:
	int y;
};
int main()
{
	Base b;
	Derived d;
	cout <<"size b = " << sizeof(b) << endl;
	cout <<"size d = " << sizeof(d) << endl;
	b.x = 10;
	d.x = 11;
	d.y = 22;
	cout <<"b.x = " << b.x << endl;
	cout <<"d.x = " << d.x << endl;
	cout <<"d.y = " << d.y << endl;
}
