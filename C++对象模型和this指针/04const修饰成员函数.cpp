#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//常函数
class person
{
public:
	//在成员函数后加const，修饰的是this的指向，让指针指向的值也不可以修改
	//this指针的本质 是 指针常量，指针的指向是不可以修改的
	void showperson() const//常函数
	{
		//m_a = 100 ; 编译器看到的是: this->m_a=100; 
		this->m_b = 100;;
	}

	void func()//普通函数
	{

	}
	int m_a;
	//加上mutable 关键字  特殊变量，即使在常函数中，也可以修改这个值；
	mutable int m_b;
};

void test01()
{
	person p;
	p.showperson();
}
//常对象

void test02()
{
	const person p;//在对象前加const变为常对象
	//p.m_a = 100;这里报错，常对象不允许修改普通成员变量
	p.m_b = 100;//m_b是我们设置的特殊变量，在常对象下也可以修改

	//常对象只能调用常函数
	//p.func();  这里报错是因为常对象调用了普通成员函数
	p.showperson();//常对象只能调用常函数
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}