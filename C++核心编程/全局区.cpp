//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
////创建普通全局变量
//int q_a = 10;
//int q_b = 12;
//const int c_q_a = 10;
//
//
//int main() {
//
//	//创建普通局部变量
//	int a = 10;
//	int b = 12;
//
//	//打印出地址可以发现局部变量和全局变量的储存位置相差很大，但是相邻的局部变量或者全局变量储存位置相差不大
//	cout << "局部变量a的地址为：" << (int)&a << endl;
//	cout << "局部变量b的地址为：" << (int)&b << endl;
//	cout << "全局变量q_a的地址为：" << (int)&q_a << endl;
//	cout << "全局变量q_b的地址为：" << (int)&q_b << endl;
//
//
//	//静态变量  用数据类型前加上static
//	static int j_a = 10;
//	static int j_b = 12;
//	cout << "静态变量j_b的地址为：" << (int)&j_a << endl;
//	cout << "静态变量j_b的地址为：" << (int)&j_b << endl;
//	//打印后发现，静态变量的地址和全局变量的地址相邻
//
//	//常量
//
//	//1:字符串常量
//	cout << "字符串常量的地址：" << (int)&"hello world" << endl;
//	//字符串常量地址和静态变量全局变量的地址有一点距离但相差不大
//
//	//const 修饰的常量
//	//const修饰的全局常量在上方
//	//const修饰的局部常量
//	const int  c_q_b = 12;
//	cout << "const修饰的全局常量的地址：" << (int)&c_q_a << endl;
//	cout << "const修饰的局部常量的地址：" << (int)&c_q_b << endl;
//	//局部常量和局部变量的位置相差不大，全局常量和全局变量的位置相差不大
//
//	//全局变量，全局常量，静态变量，字符串常量，在全局区
//	//局部变量，局部常量不在全局区
//
//	//程序运行前分为全局区和代码区
//
//	system("pause");
//	return 0;
//}