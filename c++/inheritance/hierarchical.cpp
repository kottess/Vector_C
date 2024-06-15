#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	A():x(21)
	{
	
	}
	A(int a):x(a)
	{
	
	}
	void print_x()
	{
		cout<<"x="<<x<<endl;
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
		//cout<<"x="<<x<<endl;
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
		//cout<<"x="<<x<<endl;
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
		//cout<<"x="<<x<<endl;
		cout<<"m="<<m<<endl;
	}
};
int main()
{
	B obi,obi1(10,20);
	C obj,obj1(11,22);
	D obk,obk1(12,23);
	cout<<"class B object data\n";
	obi.print_x();
	obi.print();	
	obi1.print_x();
	obi1.print();	
	
	cout<<"class C object data\n";
	obj.print_x();
	obj.print();	
	obj1.print_x();
	obj1.print();	
	
	cout<<"class D object data\n";
	obk.print_x();
	obk.print();
	obk1.print_x();
	obk1.print();
}
