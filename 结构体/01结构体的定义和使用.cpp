//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
////结构体是用户自定义的数据类型，允许用户储存不同的数据类型
//
////1:先创建学生数据类型：学生包括（姓名，年龄，分数）
////自定义数据类型，一些类型集合组成的一个类型
////语法 ：struct 类型名称{成员列表}； 
//
//struct student //大括号中是该数据类型的成员列表
//{
//	//姓名
//	string name;
//	//年龄
//	int age;
//	//分数
//	int score;
//}s3;//顺便创建结构体变量
//
//
//int main() {
//
//						//2:通过学生类型创建具体学生 
//
//	//2.1:struct student s1;					
//	struct student s1;	//创建结构体变量
//						//给s1属性赋值
//	s1.name = "张三";
//	s1.age = 17;
//	s1.score = 100;
//
//	cout << "姓名：" << s1.name  << "年龄：" << s1.age << "分数：" << s1.score << endl;
//
//
//	//2.2:strucr student s2={...(赋初始值)}					
//	struct student s2 = { "李四",19,80 };
//	cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;
//
//	//2.3在定义结构体时顺便创建结构体变量,用的比较少
//	//s3的创建见19行
//	s3.name = "王五";
//	s3.age = 19;
//	s3.score = 99;
//	cout << "姓名：" << s3.name << "年龄：" << s3.age << "分数：" << s3.score << endl;
//
//		
//
//	system("pause");
//	return 0;
//}