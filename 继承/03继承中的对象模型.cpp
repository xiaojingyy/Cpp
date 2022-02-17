//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//
////私有成员只是被隐藏了，还是会继承下去
//class base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class son1 :public base1
//{
//public:
//	int m_son;
//};
//
//void test01()
//{
//	//通过打印可以看出，son1类型的大小有16个字节，所以可以说明父类中的私有属性也继承下来了
//	cout << "size of son1=" << sizeof(son1) << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}