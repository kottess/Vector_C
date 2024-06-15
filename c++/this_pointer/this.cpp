#include<iostream>
using namespace std;
class A
{
	private:
	int x,y;
	public:
	void setdata();//void setdata(A*const this);
	void print();//void print(A*const this);
};
void A::setdata()//void A::setdata(A*const this)
{
	cout <<"Enter the data" << endl;
	cin >> x >> y; //cin >> this->x >> this->y;
}
void A::print()//void A::print(A*const this)
{
	cout <<"x - " << x << endl; //cout<<this->x;
	cout <<"y - " << y << endl; //cout<<this->y;
}
int main()
{
	A obj;
	obj.setdata(); //A::setdata(&obj);
	obj.print(); //A::print(&obj);
}
