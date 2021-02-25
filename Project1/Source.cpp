#include<iostream>
#include<stdio.h>
using namespace std;
class FLOAT
{
	float a;
public:
	void setdata(int x)
	{
		a=x;
	}
	void getdata()
	{
		cout << "\n"<<a;
	}
	FLOAT operator +(FLOAT c)
	{
		FLOAT temp;
		temp.a = a + c.a;
		return temp;
	}
	FLOAT operator-(FLOAT c)
	{
		FLOAT temp;
		temp.a = a - c.a;
		return temp;
	}
	FLOAT operator *(FLOAT c)
	{
		FLOAT temp;
		temp.a = a * c.a;
		return temp;

	}
	FLOAT operator /(FLOAT c)
	{
		FLOAT temp;
		temp.a = a / c.a;
		return temp;
	}
};
int main()
{
	FLOAT c1, c2, c3, c4, c5, c6;
	c1.setdata(2);
	c2.setdata(3);
	cout << "addition" << endl;
	c3 = c1 + c2;
	c3.getdata();
	cout << "Substraction" << endl;
	c4 = c2 - c3;
	c4.getdata();
	c5 = c1 * c2;
	c5.getdata();
	c6 = c1 / c2;
	c6.getdata();


}