//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	int a = 10;
//	cout <<"a="<< a << endl;
//	//1:指针的定义语法：数据类型*变量名；
//	int* p;
//	
//	//指针变量赋值
//	p = &a;//指针指向变量a的地址
//	//也可以在创建的时候就指向a：   int*p=&a;
//	cout <<"&a="<< & a << endl;
//	cout << "p="<< p << endl;
//
//	//2:指针的引用
//	//通过*操作指针变量指向的内存
//	cout << "*p=" << *p << endl;
//
//	//可以通过改变*p的值来改变a的值
//	*p = 99;
//	cout << "改变之后的*p的值是" << *p << endl;
//	cout << "改变之后的a的值是" << a << endl;
//
//	system("pause");
//	return 0;
//}