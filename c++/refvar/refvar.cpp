#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int &r = x;
		r = 20;
	cout <<"x - " << x << " &x - " << &x << endl;
	cout <<"r - " << r << " &r - " << &r << endl;
	int &r2 = r;
	cout <<"r2 - " << r2 << " &r2 - " << &r2 << endl;
}
