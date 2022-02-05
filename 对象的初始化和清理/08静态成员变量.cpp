#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//静态成员变量
class person
{
public:
	//1：所有对象都共享同一份数据
	//2：在编译阶段就分配内存
	//3：类内声明，类外初始化操作，类内无法初始化操作
	static int m_a;
private:
	//静态成员变量也是有访问权限的
	static int m_b;
};

//这里是通过类名去初始化
int person::m_a = 100;
int person::m_b = 300;


void test01()
{
	person p;
	//100
	cout << p.m_a << endl;

	person p2;
	p2.m_a = 200;
	//200
	cout << p.m_a << endl;
	//因为这是一份共享数据，谁改了都会改到根源
}

void test02()
{
	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式

	//1:通过对象名进行访问
	person p;
	cout << p.m_a << endl;

	p.m_a = 200;

	//2:通过类名进行访问
	cout << person::m_a << endl;
	//cout << person::m_b << endl;    静态成员变量也是有访问权限的
}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}