#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//普通实现页面

//Java页面
class java
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册.." << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图.." << endl;
	}
	void left()
	{
		cout << "java,python,cpp" << endl;
	}
	void content()
	{
		cout << "java的学科视频" << endl;
	}
};

//python页面
class python
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册.." << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图.." << endl;
	}
	void left()
	{
		cout << "java,python,cpp" << endl;
	}
	void content()
	{
		cout << "python的学科视频" << endl;
	}
};

//cpp页面
class cpp
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册.." << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图.." << endl;
	}
	void left()
	{
		cout << "java,python,cpp" << endl;
	}
	void content()
	{
		cout << "cpp的学科视频" << endl;
	}
};


void test01()
{
	cout << "java下载视频页面如下：" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	cout << "------------------" << endl;
	cout << "java下载视频页面如下：" << endl;
	python py;
	py.header();
	py.footer();
	py.left();
	cout << "------------------" << endl;
	cout << "java下载视频页面如下：" << endl;
	cpp cp;
	cp.header();
	cp.footer();
	cp.left();
}

int main()
{
	test01();
	system("pause");
	return 0;
}