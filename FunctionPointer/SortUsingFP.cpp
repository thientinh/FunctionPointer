#include <iostream>
using namespace std;

class HocSinh
{
private: 
	float tuoi;
	float toan;
	float ly;
	float hoa;
	
public:
	void putToan(float _toan) 
	{ 
		toan = _toan;
	}
	float getToan() 
	{
      return toan;
	}
	__declspec(property(get = getToan, put = putToan)) float Toan;
};

int CompareHS(const void * _a, const void * _b)
{
	 HocSinh * a = ( HocSinh *)_a;
	 HocSinh * b = ( HocSinh *)_b;
	if ((a->Toan) > (b->Toan))
	{
		return 1;
	}
	return 0;
}
int Compare(const void * _a, const void * _b)
{
	const float * a = (const float *)_a;
	const float * b = (const float *)_b;
	if (*a>*b)
	{
		return 1;
	}
	return 0;
}
void Sort(void * a[], int n, int (*cmp)(const void *, const void *))
{
	for (int i = 0; i<n-1; i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if (cmp(a[i], a[j]))
			{
				void * tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
void DemoFPFloat()
{
	/////float Array 
	
	float * a[10];
	int n = 10;
	for (int i = 0; i<5; i++)
	{
		a[i] = new float;
		*a[i] = 8*i ;
	}
	for (int i = 5; i<n; i++)
	{
		a[i] = new float;
		*a[i] = 1*i ;
	}
	void **  b;
	b = (void **) (a);
	/*
	for (int i = 0; i<n; i++)
	{
		b[i] = (void *) &a[i];
	}
	*/
	Sort(b, n, &Compare);
	for (int i = 0; i<n; i++)
	{
		float kq = *((float*)b[i]);
		cout<<kq<<";";
	}
	
}
void DemoFPObject()
{
	/////HocSinh Array
	int n = 10;
	HocSinh * hs[10];
	//HocSinh hs[10];
	for (int i = 0; i<10; i++)
	{
		hs[i] = new HocSinh();
		((HocSinh *)hs[i])->Toan = i%4;
		//hs[i].Toan = i%4;
	}

	/*
	void * mangSX[10];
	for (int i = 0; i<n; i++)
	{
		mangSX[i] = (void*)hs[i];
		//mangSX[i] = (void*)&hs[i];
	}
	*/
	void * * mangSX;
	mangSX = (void **)hs;
	Sort(mangSX, n, &CompareHS);
	for (int i = 0; i<n; i++)
	{
		HocSinh *item = (HocSinh *)hs[i];
		float kq = item->Toan;
		cout<<kq<<";";
	}

}
void main()
{
	DemoFPFloat();
	DemoFPObject();
}