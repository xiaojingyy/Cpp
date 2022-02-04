#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//1：使用一个已经创建完毕的对象来初始化一个新对象

//2：值传递的方式给函数参数传值

//3：值方式返回局部对象

class person
{
public:
	person()
	{
		cout << "person的默认构造函数的调用" << endl;
	}
	person(int age)
	{
		m_age = age;
		cout << "person的有参构造函数的调用" << endl;
	}
	person(const person &p)
	{
		m_age = p.m_age;
		cout << "person的拷贝构造函数的调用" << endl;
	}
	~person()
	{
		cout << "person的析构构造函数的调用" << endl;
	}
	
	int m_age;
};

void test01()
{
	person p1(20);
	person p2(p1);
}


int main()
{


	system("pause");
	return 0;
}