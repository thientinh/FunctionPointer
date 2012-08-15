#include <iostream>
using namespace std;

float Plus    (float a, float b) { return a+b; }
float Minus   (float a, float b) { return a-b; }
float Multiply(float a, float b) { return a*b; }
float Divide  (float a, float b) { return a/b; }

float SwitchFuntionWithFuntionPointer(float a, float b, float (*pt2Func) (float, float))
{
	return (*pt2Func)(a, b);
}
float (*GetPtr1 (char opCode))(float, float)
{
	switch (opCode)
	{
	case '+':
		return &Plus;
		break;
	case '-':
		return &Minus;
		break;
	case '*':
		return &Multiply;
		break;
	case '/':
		return &Divide;
		break;
	default:
		return &Plus;
		break;
	}
}
typedef float(*pt2Func)(float, float);

pt2Func GetPtr2(const char opCode)
{
   switch (opCode)
	{
	case '+':
		return &Plus;
		break;
	case '-':
		return &Minus;
		break;
	case '*':
		return &Multiply;
		break;
	case '/':
		return &Divide;
		break;
	default:
		return &Plus;
		break;
	}
}

void main1()
{
	int a = 10;
	int b = 20;
	int kq = SwitchFuntionWithFuntionPointer(a, b, &Plus);
	cout<<"Kq = "<< kq << endl;
	cout<<"Tran Thien Tinh";

	float (*pt2Function) (float, float);
	pt2Function = GetPtr1('-');
	kq = pt2Function(110, 30);
	cout<<"Ket qua = "<< kq;
}