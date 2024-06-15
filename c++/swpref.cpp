#include<iostream>
using namespace std;
void swp(int &p,int &q);
int main()
{
	int x = 10,y = 20;
	cout <<"Before swaping : x - " << x << " y - " << y << endl;
	swp(x,y);
	cout <<"After swaping : x - " << x << " y - " << y << endl;
}
void swp(int &p,int &q)
{
	int temp;
	temp = p, p = q, q = temp;
}
