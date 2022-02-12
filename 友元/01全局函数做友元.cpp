//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////建筑物类
//class building
//{
//	//这里声明goodgay全局函数是building的好友，可以访问building中的私有属性
//	friend void goodgay(building* building);
//public:
//	building()
//	{
//		sittingroom = "客厅";
//		bedroom = "卧室";
//	}
//public:
//	string sittingroom;
//private:
//	string bedroom;
//};
//
//void goodgay(building* building)
//{
//	cout << "好朋友的全局函数正在访问：" << building->sittingroom << endl;
//	//不能直接访问私有属性，但是使用友元可以 
//	cout << "好朋友的全局函数正在访问：" << building->bedroom << endl;
//}
//
//void test01()
//{
//	building builds;
//	goodgay(&builds);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}