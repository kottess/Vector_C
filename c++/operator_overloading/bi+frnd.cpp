#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A() { }
	A(int a,int b):x(a),y(b) { }
	void print();
	friend A operator+(const A &,A &);
};	
	A operator+(const A &ob1,A &ob2)
	{
		cout <<"binary + operator function" << endl;
		A res;
		res.x = ob1.x + ob2.x;
		res.y = ob1.y + ob2.y;
		return res;
	}
void A::print() 
{
	cout << "x - " << x << " y - " << y << endl;
}
int main()
{
	A obj1(10,20), obj2(11,22),obj3,obj4;
	obj3 = obj1 + obj2; 			
	obj4 = obj1 + obj2 + obj3;
	cout <<"Obj1 data : ";
	obj1.print();
	cout <<"Obj2 data : ";
	obj2.print();
	cout <<"Obj3 data : ";
	obj3.print();
	cout <<"Obj4 data : ";
	obj4.print();
}
