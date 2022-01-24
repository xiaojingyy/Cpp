//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////栈区数据的注意事项-----不要返回局部变量的地址
////栈区数据由编译器管理开辟和释放
//
//int* func()//返回类型为指针的函数
//{
//	int a = 10;//局部变量  存放在栈区，栈区的数据函数执行完后自动释放
//	return &a;//返回一个局部变量的地址
//}
//
//int main() {
//	//利用指针接收返回值的地址
//	int *p=func();
//	cout << *p << endl;//确实第一次可以接收到局部变量的地址
//	cout << *p << endl;//但是第二次不能接收到
//	//这是因为编译器只保留一次该地址，防止误操作
//
//
//	system("pause");
//	return 0;
//}