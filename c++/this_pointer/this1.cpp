#include<iostream>
using namespace std;
class A
{
	private:
	int x,y;
	public:
	void setdata(int x,int y) //this = &obj;
	{
		//*this = obj;
		//this->x = x, this->y = y;
		(*this).x = x, (*this).y = y;
		//A::x = x, A::y = y;
	}
	A modify()
	{
		x = -x, y = -y;
		return *this; //return obj1;
	}
	void print()
	{
		cout <<"x = " << this->x << endl;
		cout <<"y = " << this->y << endl;
	}
};
int main() //non-member function
{
	A obj1,obj2;
	obj1.setdata(10,20);//A::setdata(&obj1,10,20);
	obj2 = obj1.modify(); //obj2 = A::modify(&obj1);
	// = obj1;
	cout << "Obj1 data:" << endl;
	obj1.print(); //A::print(&obj1);
	cout << "Obj2 data:" << endl;
	obj2.print(); //A::print(&obj2);
}
/*void A::setdata(A *const this,int x,int y)
{
	this->x = x;
	this->y = y;
}
A A::modify(A *const this)
{
	this->x = -this->x;
	this->y = -this->y;
}	
void A::print(A *const this)
{	
	cout <<"x - " << this->x << endl;
	cout <<"y - " << this->y << endl;
}*/
