#include<iostream>
#include<clocale>
using namespace std;
int main()
{
        setlocale(LC_ALL,"");
//wchar_t s[20] = {0x0b93,' ',' ',0x0b87,' ',' ',0x0bf5,' ',' ',' ',0x0bf8};

//wchar_t s[20] = {0x0917,0x0941,0x0921};

//      wchar_t s[20] = {0x5104,0x767c,0x842c,0x5343};
  wchar_t s[20] = {0x0c24,0x0c3e,' ',0xc66,' ',0x0c21,' ',0x0c35};

        wcout << s << endl;

        wcout <<"size : " << sizeof(wchar_t) << endl;
}
