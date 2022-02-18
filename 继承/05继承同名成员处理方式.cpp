//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////父类
//class father
//{
//public:
//	father()
//	{
//		m_a = 100;
//	}
//	 
//	void func()
//	{
//		cout << "father 中的 m_a=" << m_a << endl;
//	}
//	int m_a;
//};
////子类
//class son: public father
//{
//public:
//	son()
//	{
//		m_a = 200;
//	}
//
//	void func()
//	{
//		cout << "son 中的 m_a=" << m_a << endl;
//	}
//
//	int m_a;
//};
//
//
//void test01()
//{
//	son s;
//	//当子类和父类中有同名的变量时，直接访问会默认访问子类中的数据
//	//如果要访问父类中的数据，就要加上作用域::
//
//	//只要子类中有同名的，父类中的就会被隐藏（不管有没有重载），如果要访问，就只能加作用域，
//
//	cout << "子类中的m_a=" << s.m_a << endl;
//	cout << "父类中的m_a=" << s.father::m_a<< endl;
//}
//
//void test02()
//{
//	son o;
//	cout << "子类中的函数调用:"  << endl;
//	o.func();
//	cout << "父类中的函数调用:" << endl;
//	o.father::func();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}