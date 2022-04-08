#include<iostream>
#include<iomanip>
using namespace std;


class Complex
{
public:
	friend ostream& operator<<(ostream& cout, Complex& complex);
	friend Complex operator+(Complex& complex1, Complex& complex2);
	friend Complex& operator+(Complex& complex, int integer);
	friend Complex& operator+(int integer, Complex& complex);

	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(int real, int imag)
	{
		this->real = real;
		this->imag = imag;
	}

private:
	double real;
	double imag;
};

//重载左移运算符，打印复数类
ostream& operator<<(ostream& cout, Complex& complex)
{
	if (complex.imag >= 0)
		cout << complex.real << "+" << complex.imag << "i" << endl;
	else
		cout << complex.real << complex.imag << "i" << endl;
	return cout;
}

//重载复数相加
Complex operator+(Complex& complex1, Complex& complex2)
{
	Complex temp;
	temp.real = complex1.real + complex2.real;
	temp.imag = complex1.imag + complex2.imag;
	return temp;
	
}
//复数加整数
Complex& operator+(Complex& complex, int integer)
{
	Complex temp;
	temp.real = complex.real + integer;
	temp.imag = complex.imag;
	return temp;
}
//整数加复数
Complex& operator+(int integer,Complex& complex)
{
	Complex temp;
	temp.real = complex.real + integer;
	temp.imag = complex.imag;
	return temp;
}

void test01()
{
	Complex complex1(10, 2);
	cout << complex1 << endl;
	Complex complex2(12,7);
	cout << complex2 << endl;
	Complex complex3 = complex1 + complex2;
	cout << complex3  << endl;
	Complex complex4 = complex3 + 5;
	cout << complex4 << endl;
	Complex complex5 =10 + complex3;
	cout << complex5 << endl;
	
	

}

int main()
{
	test01();
	system("pause");
	return 0;
}