#include<iostream>
using namespace std;
class A
{
	int *p;
	public:
	A()
	{
		cout <<"constructor"<<endl;
		p = new int[5];
		cout <<"p - "<< p << endl;
	}
	~A()
	{
		cout <<"destructor"<<endl;
		delete []p;
	}
};
int main()
{
	{
		A obj1;
	}
	A obj2;
}	
