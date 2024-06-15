#include<iostream>
using namespace std;
int &fun(int &r)
{
	cout <<"in function : r - " << r << endl;
	return r;
}
int main()
{
	int x = 10;
	fun(x) = 15;
	cout <<"x - " << x << endl;
}
