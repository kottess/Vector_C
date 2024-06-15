#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A() { }
	A(int a,int b):x(a),y(b) { }
	void print();
	friend A operator++(A &);
};	
A operator++(A &ob)
{
	cout <<"operator function" << endl;
	A res;
	res.x = ++ob.x ;
	res.y = ++ob.y ;
	return res;
}
void A::print() 
{
	cout << "x = " << x << " y = " << y << endl;
}
int main()
{
	A obj1(10,20), obj2;
	obj2=++obj1;
	cout <<"Obj1 data : ";
	obj1.print();
	cout <<"Obj2 data : ";
	obj2.print();
}
