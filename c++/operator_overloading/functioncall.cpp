#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(int a,int b):x(a),y(b) { }
	void operator()(int a,int b) 
	{
		cout<<"func call operator"<<endl;
		x = a, y = b;
	}
	void print();
};
void A::print() 
{
	cout << "x = " << x << " y = " << y << endl;
}
int main()
{
	A obj(10,20);
	cout <<"initial Obj data : ";
	obj.print();
	obj(11,22); //obj.operator()(11,22);
	cout <<"After modify Obj data : ";
	obj.print();
	obj(12,24);//obj.operator()(12,24);
	cout <<"After modify Obj data : ";
	obj.print();
}
