#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	void print()
	{
		cout<<"x = "<< x <<" y = "<< y << endl;
	}
	friend istream& operator>>(istream &,A &);
	
};
istream& operator>>(istream &in,A &ob)
{
	cout<<"Enter x and y value\n";
	in >>ob.x >> ob.y;
	return in;
}
int main()
{
	A obj1,obj2,obj3;
	cin >> obj1 >> obj2 >> obj3;
	cout<<"obj1 data ";
	obj1.print();
	cout<<"obj2 data ";
	obj2.print();
	cout<<"obj3 data ";
	obj3.print(); 
}
