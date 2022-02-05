//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////构造函数调用规则
////1：创建一个类，C++编译器会给每个类都添加至少三个函数
////默认函数（空实现）
////析构函数（空实现）
////拷贝函数（值拷贝）
//
//
////2:如果我们写了有参构造函数，编译器就不再提供默认构造，但是依然提供拷贝构造
////如果我们写了拷贝构造函数，编译器就不再提供其他构造函数
//
//class person
//{
//public:
//
//	/*person()
//	{
//		cout << "这是person的默认构造函数的调用" << endl;
//	}*/
//	person(int age)
//	{
//		cout << "这是person的有参构造函数的调用" << endl;
//		m_age = age;
//	}
//	person(const person& p)
//	{
//		cout << "person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//	}
//	~person()
//	{
//		cout << "这是person的析构函数的调用" << endl;
//	}
//
//	int m_age;
//
//};
//
////void test01()
////{
////	person p;
////	p.m_age = 19;
////	person p2(p);
////	cout << "p2的年龄是" << p2.m_age << endl;
////}
//
//void test02()
//{
//	//person p;//如果把上面的默认构造函数注释掉，留下有参构造，那这样就不能调用默认构造函数，会报错
//	person p3(20);
//	cout << "p2的年龄是" << p3.m_age << endl;
//
//
//}
//
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}