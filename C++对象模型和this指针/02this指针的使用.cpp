//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////this指针的用途：
////1：当形参和成员变量同名时，可以用this指针来区分
////2：返回对象本身用*this
//
//class person
//{
//public:
//	person(int age)
//	{
//		//谁调用这个函数，this就指向谁
//		this->age = age;
//	}
//
//	void  addage(person& p)
//	{
//		this->age += p.age;
//		
//	}
//    
//	person& addage_pro(person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()
//{
//	person p1(18);
//	cout << "person的年龄是" << p1.age << endl;
//
//}
//
//void test02()
//{
//	person p1(10);
//	person p2(10);
//	cout << "p2的值是" << p2.age << endl;
//	p2.addage(p1);
//	cout << "p2加了一次的值是" << p2.age << endl;
//	p2.addage_pro(p1).addage_pro(p1).addage_pro(p1).addage_pro(p1);
//	cout << "p2加了5次的值是" << p2.age << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	system("cls");
//	return 0;
//}
//
