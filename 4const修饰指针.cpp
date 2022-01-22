//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main(){
//	//const--常量
//
//	//1：const修饰指针   常量指针
//	int a = 10;
//	int b = 20;
//	const int* p = &a;
//	//因为const修饰的是常量（*p已经是解引用了，表示一个值），所以不能修改指针的值
//	//*p = 20;，这一步会报错：表达式的左值必须是可修改的
//	p = &b;//这一步就是对的，因为是改了指针的指向
//
//	//2:const修饰常量    指针常量
//	int* const p2 = &a;
//	*p2 = 100; //正确的
//	//p2 = &b;   错误的，因为const修饰的是一个地址，即指向不能改
//
//	//3:const修饰指针和常量
//	const int* const p3 = &a;
//	//指针的指向和指针指向的值都不可以改
//	//*p3 = 100;
//	//p3 = &b;
//
//	
//
//
//	return 0;
//}