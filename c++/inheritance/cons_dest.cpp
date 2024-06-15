#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout <<"constructor-A"<<endl;
	}
	~A()
	{
		cout <<"destructor-A"<<endl;
	}
};
class B : public A
{
	public:
	B():A()
	{
		cout <<"constructor-B"<<endl;
	}
	~B()
	{
		cout <<"destructor-B"<<endl;
		//~A();
	}
};
int main()
{
	B obj;
}
