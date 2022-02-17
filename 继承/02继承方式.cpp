//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////继承方式
//
//
////第一个父类
//class base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//
//};
//
////公共继承
//class son1 :public base1
//{
//public:
//	void func()
//	{
//		m_a = 10;//父类中的公共权限到了子类依然是公共权限
//		m_b = 10;//父类中的保护权限到了子类依然是保护权限
//		//m_c = 10;//父类中的私有权限是不可以访问的
//	}
//};
//
//void test01()
//{
//	son1 s1;
//	s1.m_a = 100;
//	//s1.m_b = 20;//父类中的保护权限只有在子类中可以被访问，在类外访问不到
//}
//
//
////保护继承
//
////第二个父类
//class base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//
//};
//
//class son2 :protected base2
//{
//public:
//	void func()
//	{
//		m_a = 10;//父类中的公共成员到了子类变为保护成员
//		m_b = 10;//父类中的保护成员到了子类变为保护成员
//		//m_c = 10;//父类中的私有权限是不可以访问的
//	}
//};
//
//void test02()
//{
//	son2 s2;
//	//s2.m_a = 10000;//在son2中， m_a也变为了保护权限 ，类外不可访问
//}
//
//
//
////私有继承
//
////第三个父类
//class base3
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//
//};
//
//class son3 :private base3
//{
//public:
//	void func()
//	{
//		m_a = 10;//父类中的公共成员到了子类变为私有成员
//		m_b = 10;//父类中的保护成员到了子类变为私有成员
//		//m_c = 10;//父类中的私有权限是不可以访问的
//	}
//};
//
//class grandson3 :public son3
//{
//public:
//	void func()
//	{
//		//m_a = 10;//子类中已经变为私有成员，再往后就不可访问了
//		//m_b = 10;//子类中已经变为私有成员，再往后就不可访问了
//		//m_c = 10;//私有权限是不可以访问的
//	}
//};
//
//void test03()
//{
//	son3 s3;
//	//s3.m_a = 10000;//在son2中， m_a变为了私有成员 ，类外不可访问
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}