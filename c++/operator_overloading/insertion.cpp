#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(int a,int b):x(a),y(b) { }
	friend ostream& operator<<(ostream &out,A &ob);
};
ostream& operator<<(ostream &out,A &ob)
{
	out << "x = " << ob.x << " y = " << ob.y << endl;
	return out;
}
int main()
{
	A obj1(10,20),obj2(11,22),obj3(12,24);
	cout << obj1 << obj2 << obj3;
}
