#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include"circle.h"
#include"point.h"

/*//设计一个点类,将包含在圆类内
class point
{
public:
	//设置xy坐标
	void setx(int x)
	{
		m_x = x;
	}
	void sety(int y)
	{
		m_y = y;
	}
	//获取xy坐标
	int getx()
	{
		return m_x;
	}
	int gety()
	{
		return m_y;
	}
private:
	int m_x;
	int m_y;
};

//点和圆的关系（圆内，圆上，圆外）
class circle
{
public:
	//设置半径
	void setr(int r)
	{
		m_r = r;
	}
	//获取半径
	int getr()
	{
		return m_r;
	}
	//设置圆心
	void setcenter(point center)
	{
		m_center = center;
	}
	//类中类
	point getcenter()
	{
		return m_center;
	}


private:
	int m_r;//半径
	point m_center;//圆心


};*/

//判断点和圆的关系
void isincircle(circle& c, point& p)
{
	//先判断点和圆心的距离，二者都平方，不用开根号
	//计算距离
	int distance =
		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	//计算半径的平方
	int r_long = c.getr() * c.getr();
	//判断关系
	if (distance == r_long)
	{
		cout << "点在圆上" << endl;
	}
	if (distance < r_long)
	{
		cout << "点在圆内" << endl;
	}
	if (distance > r_long)
	{
		cout << "点在圆外" << endl;
	}

}

int main()
{
	//创建圆
	circle c;
	c.setr(10);
	point center;
	center.setx(10);
	center.sety(0);
	c.setcenter(center);

	//创建点
	point p;
	p.setx(10);
	p.sety(10);

	//判断关系
	isincircle(c, p);




	system("pause");
	return 0;
}