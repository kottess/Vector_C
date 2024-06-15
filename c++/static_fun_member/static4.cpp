#include<iostream>
using namespace std;
class A
{
	int x,y; //non-static data-members.
	static int z; //static data-member
	public:
	A(int a,int b):x(a),y(b) 
	{ }
	static void static_printFun()
	{	
		cout <<"in static_printFun function" << endl;
		//cout <<"x - " << x << " y - " << y << endl;
		cout <<"z - " << z << endl;
	}	
	void non_static_printFun()
	{
		cout <<"in non_static_printFun function" << endl;
		cout <<"x - " << x << " y - " << y << endl;
		cout <<"z - " << z << endl;
	}
};
int A::z = 1;
int main()
{
	A obj(10,20);
	//obj.static_printFun(); //A::static_printFun();
	A::static_printFun(); //A::static_printFun();
	obj.non_static_printFun(); //A::non_static_printFun(&obj);
}
