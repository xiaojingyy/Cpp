//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//void swap01(int a,int b) {
//	int temp = a;
//	a = b;
//	b = a;
//}
//void swap02(int* a,int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	//值传递,并不改变实参
//	swap01(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	//指针传递，可以改变实参的值
//	//指针储存的是地址，所以函数传递的应该是地址
//	cout << "指针传递cd之前" << endl;
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//	swap02(&c, &d);
//	cout << "指针传递cd之后" << endl;
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//	system("pause");
//	return 0;
//}