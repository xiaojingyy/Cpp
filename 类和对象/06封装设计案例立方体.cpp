//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////1：创建立方体类
////2：设计属性
////3：设计行为  获取体积和面积
////4：分别利用全局函数和成员函数 判断两个立方体是否相等
//
//class cube
//{
//public:	
//	//设置长宽高
//	void setl(int l)
//	{
//		m_long = l;
//	}
//	void setw(int w)
//	{
//		m_width = w;
//	}
//	void seth(int h)
//	{
//		m_height = h;
//	}
//	//获取长宽高
//	int getl()
//	{
//		return m_long;
//	}
//	int getw()
//	{
//		return m_width;
//	}
//	int geth()
//	{
//		return m_height;
//	}
//	//获取面积和体积
//	int gets()
//	{
//		return 2 * m_long * m_width + 2 * m_long * m_height + 2 * m_height * m_width;
//	}
//	int getv()
//	{
//		return m_long * m_width * m_height;
//	}
//	//利用成员函数判断两个立方体是否相等
//	bool same_class(cube&c)//这里只要传入一个参数，因为已经用了一个参数去调用这个函数
//	{
//		if (m_long == c.getl() && m_width == c.getw() && m_height == c.geth())
//			return true;
//		else return false;
//	}
//
//
//	//设置属性,一般用私有
//private:
//	int m_long;
//	int m_width;
//	int m_height;
//
//};
//
////利用全局函数判断两个立方体是否相等
//bool same(cube& c1, cube& c2)
//{
//	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
//		return true;
//	else return false;
//
//}
//
//int main()
//{
//	cube c1;
//	c1.setl(10);
//	c1.setw(10);
//	c1.seth(10);
//	cube c2;
//	c2.setl(10);
//	c2.setw(10);
//	c2.seth(11);
//
//	cout << "c1的面积为：" << c1.gets() << endl;
//	cout << "c1的体积为：" << c1.getv() << endl;
//	//下面用全局函数判断
//	bool ret = same(c1, c2);
//	if (ret)
//		cout << "全局函数判断：c1和c2是相等的" << endl;
//	else
//		cout << "全局函数判断：c1和c2不相等" << endl;
//
//	//下面利用成员函数判断
//	ret = c1.same_class(c2);
//	if (ret)
//		cout << "成员函数判断：c1和c2是相等的" << endl;
//	else
//		cout << "成员函数判断：c1和c2不相等" << endl;
//	system("pause");
//	return 0;
//}