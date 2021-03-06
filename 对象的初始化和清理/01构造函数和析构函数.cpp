#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


class person
{
public:
	//1构造函数 进行初始化操作
	//没有返回值
	//函数名与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象的时候，构造会自动调用，而且只调用一次
	person()
	{
		cout << "person的构造函数的调用" << endl;
	}

	//2析构函数 进行清理操作
	//没有返回值 不写void
	//函数名和类名相同 在名称前加~
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前，构造函数会自动调用，而且只调用一次
	~person()
	{
		cout << "person 析构函数的调用" << endl;
	}

};
//构造函数和析构函数都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现


void test01()
{
	person p;//在栈上的数据，在执行完之后会自动释放，就会自动调用析构函数
}
int main()
{
	//test01();//如果调用这个栈区函数，会执行后释放并调用析构函数
	person p1;//这个创建不会直接显示析构函数。因为还没有释放，要等到按下任意键释放后才行

	system("pause");
	return 0;
}