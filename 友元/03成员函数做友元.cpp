#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


class goodgay
{

public:
	goodgay();//这次放在类外实现
	void visit();
	void visit2();
	Building* building;
};

class Building
{
	//明确告诉编译器 googgay类下的成员函数作本类的好朋友，可以访问私有内容
	friend void goodgay::visit();
public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;

};
Building::Building()//building类作用域中的building构造函数的定义
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

goodgay::goodgay()
{
	//创建建筑物对象
	building = new Building;//new返回的是该数据类型的指针

}

void goodgay::visit()
{
	cout << "好友类正在访问：" << building->m_sittingroom << endl;

	cout << "好友类正在访问：" << building->m_bedroom << endl;

}
void goodgay::visit2()
{
	cout << "好友类正在访问：" << building->m_sittingroom << endl;

	//cout << "好友类正在访问：" << building->m_bedroom << endl;
	//visit2 不能访问是因为他不是友元

}


void test01()
{
	goodgay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();
	system("pause");
	return 0;
}