#include<iostream>
using namespace std;
class A
{
	public: int x,y;
	static int z; //static declaration
	A(int a,int b):x(a),y(b)
	{
		cout <<"Parameterized constructor"<<endl;
	}
	void print()
	{
		cout <<"x - " << x << " y - " << y;
		cout <<" z - " << z << endl;
	}
};
int A::z = 15;//static definition
int main()
{
	A obj1(10,20),obj2(11,22),obj3(12,24);
	cout <<"sizeof(A) : " << sizeof(A) << endl;
	cout <<"sizeof(obj1) : " << sizeof(obj1) << endl;
	cout <<"sizeof(obj2) : " << sizeof(obj2) << endl;
	cout <<"sizeof(obj3) : " << sizeof(obj3) << endl;
	obj1.z = 25;
	
	obj1.print();
	obj2.print();
	obj3.print();
}
