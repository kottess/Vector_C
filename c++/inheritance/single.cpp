#include<iostream>
using namespace std;
class A
{
	protected:
	int x;
	public:
	A():x(10)
	{
		cout <<"constructor-A"<<endl;
	}
	A(int a):x(a)
	{
		cout <<"parameterized constructor-A"<<endl;
	}
	~A()
	{
		cout <<"destructor-A"<<endl;
	}
};
class B : public A
{
	int y;
	public:
	B():y(20) //B():A(),y(20)
	{
		cout <<"constructor-B"<<endl;
	}
	B(int a,int b):A(a),y(b)
	{
		cout <<"Parameterized constructor-B" << endl;
	}
	void print()
	{
		cout <<"x = " << x << endl;
		cout <<"y = " << y << endl;
	}
	~B()
	{
		cout <<"destructor-B"<<endl;
	}
};
int main()
{
	B obj1,obj2(11,22);
	obj1.print();
	obj2.print();
}
