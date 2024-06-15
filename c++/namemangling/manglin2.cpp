#include<iostream>
using namespace std;
void fun(int x,int ch,int y)
{
	cout <<"x - " << x << endl;
	cout <<"ch - " << ch << endl;
}
//int fun(int x,char ch) //error
void fun(char ch,char x,char c1)
{
	cout <<"x - " << x << endl;
	cout <<"ch - " << ch << endl;
}
int main()
{
	fun(10,15,20);
	fun('B','A','C');
}
