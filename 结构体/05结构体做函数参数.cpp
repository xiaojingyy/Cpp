//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////打印信息的函数
//
////1:值传递
//void printstudent1(struct student s)//括号中表示传递一个结构体
//{
//	
//	cout << "子函数1中 姓名: " << s.name << "年龄： " << s.age << "分数: " << s.score << endl;
//}
//
////2:地址传递
//void printstudent2(struct student* p)
//{
//	p->age = 100;//通过地址传递可以改变实参的值
//	cout << "子函数2中 姓名： " << p->name << "年龄: " << p->age << "分数：" << p->score << endl;
//}
//
//int main() {
//	//将学生传入一个参数中，打印学生身上的所有信息
//
//	//创建结构体变量
//	struct student s;
//	s.name = "张三";
//	s.age = 19;
//	s.score = 90;
//	printstudent1(s);
//	printstudent2(&s);
//	cout << "main函数中姓名： " << s.name
//		<< "年龄： " << s.age
//		<< "分数： " << s.score << endl;
//	
//	
//	system("pause");
//	return 0;
//}