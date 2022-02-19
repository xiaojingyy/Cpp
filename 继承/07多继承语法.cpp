//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////多继承语法
//
//class base1
//{
//public:
//	base1()
//	{
//		m_a = 100;
//	}
//	int m_a;
//};
//
//class base2
//{
//public:
//	base2()
//	{
//		m_a = 200;
//	}
//	int m_a;
//};
//
////子类同时继承base1和base2
//
////语法：class 子类 ： 继承方式 父类1  ，  继承方式 父类2
//class son :public base1, public base2
//{
//public:
//	son()
//	{
//		m_v = 30;
//		m_n = 43;
//	}
//	int m_v;
//	int m_n;
//};
//
//void test01()
//{
//	son s;
//	cout << "sizeof son=" << sizeof(son) << endl;
//
//	//访问不同父类中的同名成员需要用作用域区分
//	cout << "父类1中的m_a=" << s.base1::m_a << endl;
//	cout << "父类2中的m_a=" << s.base2::m_a << endl;
//
//}
//
//
//
//void main()
//{
//	test01();
//	system("pause");
//}