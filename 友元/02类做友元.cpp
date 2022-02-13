#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Building
{
	//重点  类做友元
	friend class goodgay;
public:
	Building();//这次在类外写成员函数


public:
	string m_sittingroom;
private:
	string m_bedroom;

};
class goodgay
{

public:
	goodgay();//这次放在类外实现
	void visit();//参观函数  访问building中属性
	Building* building;
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

void test01()
{
	goodgay gg;
	gg.visit();

}

int main()
{
	test01();
	system("pause");
	return 0;
}