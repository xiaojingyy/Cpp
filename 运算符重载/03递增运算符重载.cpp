//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//public:
//	person()
//	{
//		m_num = 0;
//	}
//
//	//重载前置++运算符
//	//切记 重载前置运算符要返回引用  这样才能像内置数据类型一样对同一个数据进行运算
//	person& operator++()
//	{
//		//先做++运算
//		m_num++;
//		//再返回引用
//		return *this;
//	}
//
//
//	//重载后置运算符
//	//void operator++(int)  int 代表占位参数  用于区分前置和后置  只能用int
//	person operator++(int)
//	{
//		//先 记录当前结果
//		person temp = *this;
//
//		//后 进行++操作
//		m_num++;
//
//		//再返回记录的结果
//		return temp;
//		//重载后置递增一定要返回值，而不是返回引用
//		//因为这里返回的是局部对象， 前面讲过  不能返回局部变量的引用  局部变量的引用会被释放
//	}
//
//	//重载前置--运算符
//	person& operator--()
//	{
//		m_num--;
//		return *this;
//	}
//
//	//重载后置--运算符
//	//切记后置运算不要返回引用
//	person operator--(int)
//	{
//		//先记录当前数据
//		person temp = *this;
//
//		//再进行运算
//		m_num--;
//
//		//再返回所记录的数据
//		return temp;
//	}
//
//
//
//private:
//	int m_num;
//
//};
//
////重载左移运算符
//ostream& operator<<(ostream& cout, person p)
//{
//	cout << p.m_num << endl;
//	return cout;
//}
//
////验证前置
//void test01()
//{
//	person p;
//	cout << ++p << endl;
//}
//
////验证后置
//void test02()
//{
//	person p;
//	cout << (++p)++ << endl;
//	cout << p << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}