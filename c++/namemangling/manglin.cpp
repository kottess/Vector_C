#include<iostream>
using namespace std;
void swp(int &x,int &y)//_Z3swpRiS_
{
	int temp;
	temp = x, x = y, y = temp;
}
void swp(char &x,char &y) //_Z3swpRcS_
{
	char temp;
	temp = x, x = y, y = temp;
}
void swp(float &x,float &y)//_Z3swpRfS_
{
	float temp;
	temp = x, x = y, y = temp;
}
int main()
{
	int x = 10, y = 20;
	char ch1 = 'A', ch2 = 'B';
	float f1 = 22.7, f2 = 4.5;
	swp(x,y);
	swp(ch1,ch2);
	swp(f1,f2);
	cout <<"after swaping " << endl;
}
