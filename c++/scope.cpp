#include<iostream>
using namespace std;
int x = 10; //global
int main()
{
	int x = 20; //local to main()
	cout <<"x - " << x << endl;
	cout <<"::x - " << ::x << endl;
	{
		int x = 30; //local to block
		cout <<"In block : x - " << x << endl;
		cout <<"::x - " << ::x << endl;
	}
}
