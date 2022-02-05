//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class phone
//{
//public:
//	phone(string name)
//	{
//		cout << "phone的构造函数调用" << endl;
//		m_pname = name;
//	}
//	~phone()
//	{
//		cout << "phone的析构函数调用" << endl;
//	}
//	//手机品牌名称
//	string m_pname;
//};
//
////其他类对象作为本类的成员时，构造时会先构造其他类对象，再构造自身，析构的顺序是反的
//class person
//{
//public:
//
//	person(string name, string pname) :m_name(name), m_phone(pname)
//	{
//		cout << "person的构造函数的调用" << endl;
//	}
//
//	//姓名
//	string m_name;
//	//手机
//	phone m_phone;
//	
//	~person()
//	{
//		cout << "person的析构函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	person p("张三", "realme");
//	cout << "" << p.m_name << "拿着" << p.m_phone.m_pname<<endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}