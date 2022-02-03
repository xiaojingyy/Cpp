#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//1构造函数的分类及调用
//分类  
//按照参数分类    无参构造（默认构造）   有参构造
//按照类型分类    普通构造    拷贝构造
class person
{
public:
	//构造函数
	person()
	{
		cout << "person的无参构造函数的调用" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person的有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	person(const person& p)
		//将传入的参数的所有属性复制到该函数的所有属性
	{
		cout << "person的拷贝构造函数的调用" << endl;
		age = p.age;
	}

	~person()
	{
		cout << "person的析构函数的调用" << endl;
	}

	int age;


};
//调用
void test01()
{
	//1括号法
	person p1;		//默认构造函数的调用
	//默认构造函数的调用不能写括号：person p1();  因为编译器会认为是一个函数的声明；

	person p2(10);	//有参构造函数的调用
	person p3(p2);	//拷贝构造函数的调用

	//拷贝构造函数的作用：见下方
	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;
	

	//2显示法
	person p4;
	person p5 = person(10);//有参构造
	person p6 = person(p5);//拷贝构造
	
	//注意1：
	person(10);//匿名对象  特点：当前行执行结束后，系统会回收该匿名函数，因为它没有名字，后面就没用了
	
	//不要利用拷贝构造函数初始化一个匿名对象  编译器会认为person(p3)==person p3; 对象会重定义
	//person(p3);     //上面已经定义了一个p3


	//3隐式转换法
	person p7 = 10;//相当于 person p7=person(10);
	person p8 = p3;//拷贝构造
}
int main()
{
	test01();
	system("pause");
	return 0;
}


