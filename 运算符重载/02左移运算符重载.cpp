//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class person
//{
//
//
//public:
//	//利用成员函数重载 左移运算符  p.operator<<(cout) 简化版就是： p<<cout; 无法满足我们将cout放在<<左边的需求,所以不会使用成员函数重载左移运算符
//	/*void operator<<(ostream cout)
//	{
//	
//	}*/
//
//	int a;
//	int b;
//
//};
//
////只能使用全局函数重载左移运算符
////返回类型为标准输出流
//ostream &operator<<(ostream& cout, person p)   //本质  operator <<(cout,p)
//{
//	cout << "m_a=" << p.a << " m_b=" << p.b << endl;
//	return cout;
//}
//
//void test01()
//{
//	person p;
//	p.a = 10;
//	p.b = 10;
//	//out << p   这是一个函数，返回值是标准输出流，所以后面可以继续写
//	cout << p <<endl;
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}