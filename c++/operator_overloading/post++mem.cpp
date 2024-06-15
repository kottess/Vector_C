#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A() { }
	A(int a,int b):x(a),y(b) { }
	A operator++();
	void print();
};
	A A::operator++()
	{
		cout <<"operator function" << endl;
		A res;
		res.x = ++x;
		res.y = ++y;
		return res;
	}
void A::print() 
{
	cout << "x - " << x << " y - " << y << endl;
}
int main()
{
	A obj1(10,20), obj2;
	obj2 = ++obj1; 			
	cout <<"Obj1 data : ";
	obj1.print();
	cout <<"Obj2 data : ";
	obj2.print();
}
