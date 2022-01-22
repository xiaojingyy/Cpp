//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
////const使用场景
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////使用值传递相当于将原本的信息复制一份，当数据量很大时，效率就会低
//void printstudent1(struct student s)
//{
//
//	cout << "子函数1中 姓名: " << s.name 
//		 << "年龄： " << s.age 
//		<< "分数: " << s.score << endl;
//}
////但是使用指针传递信息就可以只占四个字节，可以减少内存空间，而且不会赋值新的副本
////使用地址传递的隐患就相当于把电脑直接给别人用，数据可能会被修改，所以就用到const
//void printstudent2(const struct student* s)
//{
//	
//	s->age = 90;//在形参中加上const就会导致这一步报错，防止误操作
//	cout << "子函数1中 姓名: " << s->name
//		<< "年龄： " << s->age
//		<< "分数: " << s->score << endl;
//}
//
//int main() {
//	struct student s={"阿伟",19,89};
//
//	//通过函数打印结构体变量信息
//	printstudent1(s);
//	
//
//
//	system("pause");
//	return 0;
//}