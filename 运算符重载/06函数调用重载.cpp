#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class person
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}

};

//这是函数， 上面的 函数调用重载 很像函数调用  
void myprint02(string test)
{
	cout << test << endl;
}

void test01()
{
	//重载的（）操作符 因为非常像函数调用 也称为仿函数
	person p;
	p("这里可以直接打印");
}

class myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	myadd p;
	int result = p(100, 10);
	cout << result;

	//匿名函数对象
	//只是暂时使用它输出，并不会保留什么
	//类型()(对象)   这就是一个匿名函数对象
	cout << myadd()(20, 30) << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}