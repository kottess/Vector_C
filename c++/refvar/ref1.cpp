#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	//int &r = ++x; //valid
	//int &r = x; //invalid
	//const int &r = x++; //valid
	//const int &r = ++x; //valid
	cout <<"x - " << x << " ,&x = " << (unsigned)&x << endl;
	cout <<"r - " << r << " ,&r = " << &r << endl;
}
