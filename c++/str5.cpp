#include<iostream>
using namespace std;
int main()
{
	string str = "vector india";
	int i;
	for(int i=0;str[i];i++)
	cout << str[i] << " ";
	cout << endl;
	cout <<"str.length() = " << str.length() << endl;
	cout <<"sizeof(string) = " << sizeof(string) << endl;
}
