//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	//空指针
//	//1：空指针用于给指针变量初始化
//	int* p = NULL;
//	//2:空指针是不可以访问的
//	//0~255之间的内存编号是系统占用的，因此不可以访问
//	//所以不能写：*p=100;
//	//一切和*p有关的都不能进行
//
//
//	//野指针
//	//指向一个非法内存空间
//	int* y = (int*)0x1100;
//	//访问野指针会报错
//	cout << *y << endl;
//
//	system("pause");
//	return 0;
//}