#include<iostream>
using namespace std;
class A
{
	public: static int z; //static declaration
	A()
	{
		cout <<"constructor"<<endl;
		z = 10; //Assignement
	}
};
int A::z = 15;//static definition
int main()
{
	A obj;
	cout <<"obj.z = " << obj.z << endl;
	cout <<"A::z = " << A::z << endl;
}
