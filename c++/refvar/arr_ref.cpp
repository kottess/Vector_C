#include<iostream>
#include<cstdint>
using namespace std;
int main()
{
	int i,a[]={10,20,30};
	int (&ra)[3]=a;
	for(i=0;i<3;i++)
		cout<<"ra["<<i<<"]="<<ra[i]<<endl;
	cout<<"a="<<(unsigned)a<<endl;
	cout<<"ra="<<ra<<endl;	
}
