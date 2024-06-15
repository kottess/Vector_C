#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cout <<"Enter the 2 strings" << endl;
	cout <<"Enter s1 string" << endl;
	cin >> s1;
	cout <<"Enter s2 string" << endl;
	cin >> s2;
	if(s1 == s2)
		cout <<"strings are same" << endl;
	else
		cout <<"strings are different" << endl;
	if(s1 < s2)
		cout <<"s1 is smaller" << endl;
	else if(s1 > s2)
		cout <<"s2 is smaller" << endl;
}
