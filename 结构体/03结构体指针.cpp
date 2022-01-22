//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////定义学生的结构体
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//	//1：创建学生的结构体变量
//	struct student s
//	{
//		"张三",18,100
//	};
//	//2:通过指针指向结构体变量
//	struct student* p = &s;//s是student类型的,所以用student*p
//
//	//3:通过指针访问结构体变量中的数据
//	//通过结构体指针访问结构体数据用“->”
//	cout << "姓名： " << p->name
//		 << "年龄： " << p->age
//		 << "分数： " << p->score << endl;
//
//	system("pause");
//	return 0;
//}