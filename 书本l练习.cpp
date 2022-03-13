//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//class Student
//{
//public:
//	Student()
//	{
//		cout << "这是执行构造函数" << endl;
//	}
//	~Student()
//	{
//		cout << "这是执行析构函数" << endl;
//	}
//	void input_date()//一个成员函数
//	{
//		cout << "请输入学号和成绩" << endl;
//		cout << "学号：" ;
//		cin >> stuID;
//
//	}
//	void show_data()
//	{
//		cout << "输入英语成绩：";
//		cin >> score_e;
//		cout << "输入数学成绩：";
//		cin >> score_m;
//		score_s = score_e+score_m;
//		score_a = score_s / 2;
//		cout << "===============" << endl;
//		cout << "学生学号：" << this->stuID<<endl;
//		cout << "总分是：" << score_s << "  平均分是：" << score_a<<endl;
//	}
//
//
//
//
//private:
//	char stuID[8];
//	float score_e, score_m, score_s, score_a;//英语，数学，总分，平均分
//};
//
//void test01()//这样是直接用函数调用构造函数和析构函数，不需要人为调用析构函数
//{
//	Student  student1;
//	student1.input_date();
//	student1.show_data();
//	cout << endl;
//}
//
//void test02()
//{
//	Student *student2=new Student;  //声明student类的指针对象，并调用构造函数
//	//用new关键字分配一块和student类大小相同的内存，并调用类的构造函数，并不会自动调用析构函数
//	student2->input_date();
//	student2->show_data();
//
//	delete student2;
//	//需要使用delete关键字将对象释放，并且调用析构函数
//
//}
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}