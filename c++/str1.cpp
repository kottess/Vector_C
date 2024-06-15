#include<iostream>
using namespace std;
int main()
{
	string str;
	cout <<"Enter the string " << endl;
	//cin >>str;//reads only single string
	getline(cin,str);//reads a string line
	cout <<"str = " << str << endl;
}
