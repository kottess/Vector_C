#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A():x(12),y(24)
	{
		cout << "Default constructor" << endl;
	}
	A(int a,int b=22):x(a),y(b)
	{
		cout <<"Parameterized constructor"<<endl;
	}
	void print()
	{
		cout <<"x - " << x << endl;
		cout <<"y - " << y << endl;
	}
};
int main()
{
	A obj1(10,20);
	A obj2(11);
	A obj3;
	cout <<"obj1 data: " << endl;
	obj1.print();
	cout <<"obj2 data: " << endl;
	obj2.print();
	cout <<"obj3 data: " << endl;
	obj3.print();
}
