//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////普通实现页面
//
////Java页面
///*
//class java
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册.." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图.." << endl;
//	}
//	void left()
//	{
//		cout << "java,python,cpp" << endl;
//	}
//	void content()
//	{
//		cout << "java的学科视频" << endl;
//	}
//};
//
////python页面
//class python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册.." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图.." << endl;
//	}
//	void left()
//	{
//		cout << "java,python,cpp" << endl;
//	}
//	void content()
//	{
//		cout << "python的学科视频" << endl;
//	}
//};
//
////cpp页面
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册.." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图.." << endl;
//	}
//	void left()
//	{
//		cout << "java,python,cpp" << endl;
//	}
//	void content()
//	{
//		cout << "cpp的学科视频" << endl;
//	}
//};
//*/
//
//
//
////使用继承实现页面公共部分
//class basepage
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册.." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图.." << endl;
//	}
//	void left()
//	{
//		cout << "java,python,cpp" << endl;
//	}
//};
//
////每个子页面的内容使用继承再加上子页面的私有部分
//class java :public basepage
//{
//public:
//	void content()
//	{
//		cout << "java的学科视频" << endl;
//	}
//};
//
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "python的学科视频" << endl;
//	}
//};
//
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp的学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "java下载视频页面如下：" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	cout << "------------------" << endl;
//	cout << "python下载视频页面如下：" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	cout << "------------------" << endl;
//	cout << "cpp下载视频页面如下：" << endl;
//	cpp cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}