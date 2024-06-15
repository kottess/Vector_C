#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout <<"constructor"<<endl;
	}
	~A()
	{
		cout <<"destructor"<<endl;
	}
};
int main()
{
	A *ptr = new A;
	//delete ptr;
}
