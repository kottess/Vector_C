#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	A():x(21)
	{
	
	}
	A(int a):x(a)
	{
	
	}
};
class B:public A
{
	public:
	int y;
	B():y(22)
	{
	
	}
	B(int a,int b):A(a),y(b)
	{
	
	}
};
class C
{
	public:
	int z;
	C():z(23)
	{
	
	}
	C(int a):z(a)
	{
	
	}
};
class D:public B,public C
{
	public:
	int m;
	D():m(24)
	{
	
	}
	D(int a,int b,int c,int d):B(a,b),C(c),m(d)
	{
	
	}
	void print()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
		cout<<"m="<<m<<endl;
	}
};
int main()
{
	D ob,ob1(10,12,13,14);
	cout<<"ob data"<<endl;
	ob.print();
	cout<<"ob1 data"<<endl;
	ob1.print();
}
