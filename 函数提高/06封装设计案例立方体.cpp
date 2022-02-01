#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//1：创建立方体类
//2：设计属性
//3：设计行为  获取体积和面积
//4：分别利用全局函数和成员函数 判断两个立方体是否相等

class cube
{
	//设置长宽高
	void setl(int l)
	{
		m_long = l;
	}
	void setw(int w)
	{
		m_width = w;
	}
	void setw(int h)
	{
		m_height = h;
	}
	//获取长宽高
	int getl()
	{
		return m_long;
	}
	int getw()
	{
		return m_width;
	}
	int geth()
	{
		return m_height;
	}
	//获取面积和体积

	//设置属性,一般用私有
private:
	int m_long;
	int m_width;
	int m_height;

};