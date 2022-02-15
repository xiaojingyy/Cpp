//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////赋值运算符重载
//
//class person
//{
//public:
//	person(int age)
//	{
//		m_age= new int(age);
//	}
//
//	//~person()
//	//{
//	//	//释放堆区内存   这里会报错  
//	//	//因为下面两个变量的所有东西是一样的，指向的内存也是一样，所以同一块内存被释放了两次，导致程序报错		
//	//	if (m_age != NULL)
//	//	{
//	//		delete m_age;
//	//		m_age = NULL;
//	//	}
//	//	//解决方案：用深拷贝解决浅拷贝带来地问题，在堆区重新开辟一块内存空间（所以就有不一样的地址了），储存一样的数据
//	//}
//
//	person& operator=(person& p)
//	{
//		//编译器会提供浅拷贝
//		//m_age = p.m_age;
//	
//		//应该先判断是否有属性在堆区，如果有，应该先释放干净
//
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		m_age= new int(*p.m_age);
//
//		//一定要注意返回值类型,要返回自身本体  ，这样可以写成连等式
//		return *this;
//	}
//
//
//	//用指针储存年龄，将内存开辟到堆区
//	int *m_age;
//};
//
//void test01()
//{
//	person p1(18);
//
//	person p2(20);
//	cout << "p2的年龄为：" << *p2.m_age << endl;
//	person p3( 2);
//	cout << "p3的年龄为：" << *p3.m_age << endl;
//
//	p3=p2 = p1;//赋值
//	cout << "赋值后" << endl;
//	cout << "p1的年龄为：" << *p1.m_age << endl;
//	cout << "p2的年龄为：" << *p2.m_age << endl;
//	cout << "p3的年龄为：" << *p3.m_age << endl;
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