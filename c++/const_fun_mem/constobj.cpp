#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A():x(10),y(20)
	{
		cout <<"constructor"<<endl;
	}
	void print() const;
};	
	void A::print() const 
	{
		cout <<"x - " << x << " y - " << y << endl;
	}
int main()
{
	const A obj;
	obj.print();
}
