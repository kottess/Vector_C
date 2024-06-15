#include<iostream>
using namespace std;
class A
{
int x,y;
public:
A() {
cout <<"default constructor" << endl;
}
A(int a,int b):x(a),y(b) {
cout <<"Parameterized constructor" << endl;
}
/*
A(A &ob):x(ob.x),y(ob.y) {
cout <<"copy constructor" << endl;
}
*/
void print()
{
cout <<"x - " << x << endl;
cout <<"y - " << y << endl;
}
};
int main()
{
A obj1(10,20);
cout <<"obj1 data: " << endl;
obj1.print();
A obj2 = obj1; //A obj2(obj1);
//here obj2 is initialized with obj1 by calling copy costructor
/*
A obj2; //default constructor
obj2 = obj1;//Assignment is done by
//Assignment operator oveloading function.
//which is provided by compiler bydefault.
*/
cout <<"obj2 data: " << endl;
obj.print();
}
