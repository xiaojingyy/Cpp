#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
	
int* func()
{
	//new返回的是该数据类型的指针
	int* p = new int(10);//创建一个变量存放10
	return p;
}

//1：new的基本语法
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//这里打印多次是没有问题的，堆区的数据由程序员管理开辟并控制释放，
	//如果想释放堆区数据，用delete关键字
	delete p;
	//cout << *p << endl;//运行时，这里会报错，因为内存已经被释放，再次访问就是非法

}

void test02()
{
	//创建10整型数据的数组
	int*arr = new int[10];//10个元素的数组

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放堆区数组
	//释放数组要加中括号
	delete [] arr;

	/*for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}*/
	//数组已经释放，所以无法再打印
}





int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}
