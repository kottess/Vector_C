#include<iostream>
using namespace std;
class A
{
	int x;
	mutable int y;
	public:
	void setdata(int a,int b);
	void modify() const; //-->const member function
	void print() const;
};
void A::setdata(int a,int b)
{
	cout <<"setdata function" << endl;
	x = a, y = b;
}
void A::modify() const
{
	//x = 15; //error
	y = 25; 
}
void A::print() const
{
	cout <<"x - " << x << " y - " << y << endl;
}
int main()
{
	A obj;
	obj.setdata(10,20);
	obj.modify();
	obj.print();
}
