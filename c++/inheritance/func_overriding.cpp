#include<iostream>
using namespace std;
class A
{
	public:
	virtual	void fun()
	{
		cout<<"fun func A\n";
	}
};
class B:public A 
{
	public:
	void fun()
	{
		cout<<"fun func B\n";
	}
};
int main()
{
	A *bptr;
	B b;
	bptr=&b;
	bptr->fun();
}
