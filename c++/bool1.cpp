#include<iostream>
using namespace std;
bool process();
int main()
{
	bool accept;
	accept = process();
	if(accept == true)
		cout <<"Process to be continued..." << endl;
	else
		cout <<"Process is terminating..." << endl;
}
bool process()
{
	char answer;
	cout <<"Do u wants to continue the process(y/n)?"<< endl;
	cin >> answer;
	if(answer == 'y')
		return true;
	else
		return false;
}
