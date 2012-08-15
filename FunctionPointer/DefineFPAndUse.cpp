#include <iostream>
using namespace std;

class TMyClass
{
public:
   int DoIt(float a, char b, char c){ cout << "TMyClass::DoIt"<< endl; return a+b+c;};
   int DoMore(float a, char b, char c) const
         { cout << "TMyClass::DoMore" << endl; return a-b+c; };
};

int (*pt2Function)(float , char, char)  = NULL;
int (TMyClass::*pt2Member)(float , char, char)  = NULL;
int (TMyClass::*pt2ConstMember)(float , char, char) const  = NULL;

int  DoIt(float a, char b, char c)
{
	return 3;
}
void main2()
{
	pt2Function = &DoIt;
	int kq  = pt2Function(5, 2, 3);
	cout<<kq;
	//////
	pt2Member = &TMyClass::DoIt;
	TMyClass *instance = new TMyClass();
	(instance->*pt2Member)(5, 2, 3);
	//////
	pt2ConstMember = &TMyClass::DoMore;
	(instance->*pt2ConstMember)(5, 2, 3); 
	
}