#include<iostream>
using namespace std;
class A
{
	public:
	int x; //non-static data member
	A():x(10)
	{
		cout <<"constructor"<<endl;
	}
};
int main()
{
	A obj;
	cout <<"obj.x = " << obj.x << endl; //valid
	//cout <<"A::x = " << A::x << endl; //invalid
}
