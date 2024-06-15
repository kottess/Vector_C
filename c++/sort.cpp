#include<iostream>
using namespace std;
class student
{
	int roll;
	char name[40];
	float marks;
	public:
	void setdata();
	void printdata();
	void sort(student (&s)[5]);
};
void student::setdata()
{
	cin>>roll>>name>>marks;
}
void student::sort(student (&s)[5])
{
	int i,j;
	student temp; 
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(s[j].roll>s[j+1].roll)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;			
			}
		}
	}
}
void student::printdata()
{
	cout<<roll <<" "<<name <<" "<<marks <<endl;
}
int main()
{
	student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter roll,name,marks for student "<<i+1<<endl;
		s[i].setdata();
	}
	s[0].sort(s);
	for(i=0;i<5;i++)
	{
		s[i].printdata();
	}	
}
