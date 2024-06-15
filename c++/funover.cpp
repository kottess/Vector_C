#include<iostream>
using namespace std;
void fun(int x,int y)
{
	cout <<"x - " << x << " y - " << y << endl;
}
void fun(int x,int y,int z)
{
	cout <<"x - " << x << " y - " << y << endl;
	cout <<"z - " << z << endl;
}
int main()
{
	fun(10,20);
	fun(11,22,33);
}
