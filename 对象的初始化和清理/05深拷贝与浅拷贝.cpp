//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////深拷贝与浅拷贝
////浅拷贝：简单的复制拷贝操作，复制的地址也是一样的
////深拷贝：在堆区重新申请空间，进行拷贝操作，对新的地址操作不会影响原来的地址
//
////别忘了栈区数据，先进后出
//
////重点：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
//
//class person
//{
//public:
//	person()
//	{
//		cout << "这是person的默认构造函数的调用" << endl;
//	}
//	person(int age,int height)
//	{
//		
//		cout << "这是person的有参构造函数的调用" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//	person(const person& p)
//	{
//		cout << "person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;		//这是编译器默认实现的
//		//m_height = p.m_height;  这是编译器默认实现的
//		m_height = new int(*p.m_height);
//		//这是申请了一个新的堆区空间，p2对这一块空间进行释放不会影响p1释放它自己的空间
//
//	}
//
//	~person()
//	{
//		//析构代码，将堆区开辟数据做释放操作
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;//防止野指针出现，让他变为空指针
//
//		}
//
//		cout << "这是person的析构函数的调用" << endl;
//	}
//
//	int m_age;
//	int* m_height;
//
//
//};
//
//void test01()
//{
//	person p1(18,160);
//	cout << "p1的年龄是" << p1.m_age << "身高为" << *p1.m_height<< endl;
//
//	person p2(p1);
//	cout << "p2的年龄是" << p2.m_age << "身高为" << *p2.m_height << endl;
//
//
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}