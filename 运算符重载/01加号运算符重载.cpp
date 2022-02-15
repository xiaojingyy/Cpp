//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////为了方便阅读，operator后面加的运算符应该和实际运算符相匹配
////比如 operator+ operator- operator*
//
//class person
//{
//public:
//	//1：成员函数重载+号  使用关键字" operator+ "当做函数名
//	/*
//	person operator+(person& p)
//	{
//		person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
//	*/
//
//	int m_a;
//	int m_b;
//};
//
////2：通过全局函数重载+号
//person operator+(person& p1, person& p2)
//{
//	person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
//
////通过运算符重载可以实现不同类型数据相加
//person operator+(person& p1, int num)
//{
//	person temp;
//	temp.m_a = p1.m_a + num;
//	temp.m_b = p1.m_b + num;
//	return temp;
//
//}
//
//void test01()
//{
//	person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//
//	person p2;
//	p2.m_a = 10;
//	p2.m_b = 10;
//
//	//上面用了operator+ 这个关键字，这里就可以使用加法将这个类型的数据相加,使运算简化
//	person p3 = p1 + p2;
//
//	//成员函数重载的本质调用
//	//person p3 = p1.operator(p2);
//
//	//全局函数重载的本质调用 
//	//person p3 = operator(p1,p2);
//
//	cout << "p3_m_a=" << p3.m_a << "  p3_m_b=" << p3.m_b << endl;
//
//	person p4 = p1 + 100;
//	cout << "p4_m_a=" << p4.m_a << "  p4_m_b=" << p4.m_b << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}