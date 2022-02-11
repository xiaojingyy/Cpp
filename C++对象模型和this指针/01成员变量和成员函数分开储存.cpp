//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class person
//{
//
//
//};
//class man
//{
//public:
//	int m_a;//非静态成员变量  属于类的对象上
//
//	static int m_b;//静态成员变量   类内声明，类外初始化
//};
//void test01()
//{
//	person p;
//	//空对象占用内存空间为：1
//	//C++编译器会给每个对象也分配一个字节空间，是为了区分对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p1="<<sizeof(p) << endl;
//}
//void test02()
//{
//	man p;
//	cout << "size of p2=" << sizeof(p) << endl;
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}