#include<iostream>
using namespace std;
class A
{
	public: static int z; //static declaration
	A():z(10)
	{
		cout <<"constructor"<<endl;
	}
};
int A::z = 15;//static definition
int main()
{
	A obj1;
}
