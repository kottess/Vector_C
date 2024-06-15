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
	int y;
	public:
	B():y(22)
	{
	
	}
	B(int a,int b):A(a),y(b)
	{
	
	}
	void print()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
};
class C:public A
{
	int z;
	public:
	C():z(23)
	{
	
	}
	C(int a,int c):A(a),z(c)
	{
	
	}
	void print()
	{
		cout<<"x="<<x<<endl;
		cout<<"z="<<z<<endl;
	}
};
class D:public A
{
	int m;
	public:
	D():m(24)
	{
	
	}
	D(int a,int d):A(a),m(d)
	{
	
	}
	void print()
	{
		cout<<"x="<<x<<endl;
		cout<<"m="<<m<<endl;
	}
};
int main()
{
	B obi,obi1(10,20);
	C obj,obj1(11,22);
	D obk,obk1(12,23);
	cout<<"class B data\n";
	obi.print();
	obi1.print();	
	cout<<"class C data\n";
	obj.print();
	obj1.print();	
	cout<<"class D data\n";
	obk.print();
	obk1.print();
}
