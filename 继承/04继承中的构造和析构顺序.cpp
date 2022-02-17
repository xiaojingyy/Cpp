//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////继承中的构造和析构顺序
//class base
//{
//public:
//	base()
//	{
//		cout << "base构造函数！" << endl;
//	}
//	~base()
//	{
//		cout << "base析构函数！" << endl;
//	}
//};
//
//
//
//class son :public base
//{
//public:
//	son()
//	{
//		cout << "son构造函数！" << endl;
//	}
//	~son()
//	{
//		cout << "son析构函数！" << endl;
//	}
//};
//
//void test01()
//{
//	base b;
//	son s;
//	//子类调用构造函数时会先创建父类的构造函数，再创建自己的构造函数，析构的顺序则相反
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