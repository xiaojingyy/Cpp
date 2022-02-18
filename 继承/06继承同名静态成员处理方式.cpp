//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////继承中的同名静态成员处理方式
//
//class base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "父类的static void func()调用" << endl;
//	}
//	//静态变量，类内声明，类外初始化
//};
//int base::m_a = 200;
//
//
//class son:public base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "子类的static void func()调用" << endl;
//	}
//	//静态变量，类内声明，类外初始化
//};
//int son::m_a = 200;
//
//
//void test01()
//{
//	//通过对象访问静态成员
//	cout << "通过对象访问静态成员" << endl;
//	son s;
//	cout << "son 中的 m_a=" << s.m_a << endl;
//	cout << "base 中的 m_a=" << s.base::m_a << endl;
//
//	//通过类名直接访问静态成员
//	cout << "通过类名直接访问静态成员" << endl;
//	cout << "son 中的 m_a=" << son::m_a << endl;
//	
//	//第一个：：表示通过类名方式访问   第二个：：表示访问父类作用域下的成员
//	cout << "base 中的 m_a=" << son::base::m_a << endl;
//	//也可以通过父类直接访问
//	cout << "base 中的 m_a=" << base::m_a << endl;
//
//}
//
//void test02()
//{
//	//1:通过对象访问
//	cout << "通过对象访问" << endl;
//	son s;
//	s.func();
//	s.base::func();
//
//	//2:通过类名访问
//	cout << "通过类名访问" << endl;
//	son::func();
//	son::base::func();
//
//
//}
//
//int main()
//{
//	test01();
//	cout << "\n\n\n" ;
//	test02();
//
//	system("pause");
//	return 0;
//}