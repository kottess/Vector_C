#include<iostream>
using namespace std;
class ATM
{
	static int count;
	ATM()
	{
		count++;
	}
	public:
	static void fun()
	{
		ATM obj;
	}
	static void print()
	{
		cout <<"No.of times ATM is accessed:"<<count<< endl;
	}	
};
int ATM::count=0;
int main()
{	
	char ch;
	while(1)
	{
		cout<<"Do u want to access ATM(y/n)" << endl;
		cin >> ch;
		if((ch=='y')||(ch=='Y'))
			ATM::fun();
		else
		{
			ATM::print();
			return 0;
		}
	}
	
}
