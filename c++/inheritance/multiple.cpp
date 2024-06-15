#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	A():x(10)
	{
		cout <<"constructor-A" << endl;
	}
	A(int a):x(a)
	{
		cout <<"Parameterized constructor-A" << endl;
	}
	~A()
	{
		cout <<"Destructor-A" << endl;
	}
};
class B
{
	public:
	int y;
	B():y(20)
	{
		cout <<"constructor-B"<< endl;
	}
	B(int b):y(b)
	{
		cout <<"parameterized constructor-B"<<endl;
	}
	~B()
	{
		cout <<"Destructor-B" << endl;
	}
};
class C
{
	public:
	int z;
	C():z(30)
	{
		cout <<"constructor-C" << endl;
	}
	C(int c):z(c)
	{
		cout <<"parameterized constructor-C"<<endl;
	}
	~C()
	{
		cout <<"Destructor-C" << endl;
	}
};
class D : public A, public B,public C
{
	public:
	int m;
	D():m(40) //A(),B(),C(),m(40)
	{
		cout <<"constructor-D" << endl;
	}
	D(int a,int b,int c,int d):A(a),B(b),C(c),m(d)
	{
		cout <<"Parameterized constructor-D" << endl;
	}
	void print()
	{
		cout <<"x - " << x << endl;
		cout <<"y - " << y << endl;
		cout <<"z - " << z << endl;
		cout <<"m - " << m << endl;
	}
	~D()
	{
		cout <<"Destructor-D" << endl;
	}
};
int main()
{
	D obj1,obj2(11,22,33,44);
	cout <<"size obj1 : " << sizeof obj1 << endl;
	cout <<"obj1 data" << endl;
	obj1.print();
	cout <<"obj2 data" << endl;
	obj2.print();
}
