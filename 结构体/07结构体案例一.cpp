//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
////一名老师带领五名学生做毕业设计，将学生以数组形式包含在老师的结构体中
//
////学生的结构体定义
//struct student
//{
//	string sname;
//	int score=60;
//};
////老师的结构体定义
//struct teacher
//{
//	string tname;
//	struct student sarray[5];
//};
//
////给老师和学生赋值的函数
//void allocatespace(struct teacher tarray[], int length)
//{
//	string nameseed = "ABCDE";//提前准备名字
//	for (int i = 0; i < length; i++)
//	{
//		tarray[i].tname = "teacher_";
//		tarray[i].tname += nameseed[i];//在teacher_后面追加名字
//		//通过循环给每名老师所带的学生赋值
//		for (int j = 0; j < 5; j++)
//		{
//			tarray[i].sarray[j].sname = "student_";
//			tarray[i].sarray[j].sname += nameseed[j];
//			int random = rand() % 61 + 40;//表示0~60间加40=0~100;
//			//这个地方还没有放随机数种子，所以分数不会变化
//			tarray[i].sarray[j].score =random;
//		}
//	}
//}
//
////打印所有信息
//void printall(struct teacher tarray[], int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << "老师姓名：" << tarray[i].tname << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名： " << tarray[i].sarray[j].sname 
//				 << "分数： " << tarray[i].sarray[j].score << endl;
//			
//		}
//	}
//}
//
//
//int main() {
//	//设置随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1:创建三名老师的数组
//	teacher tarray[3];
//	//2:通过函数给三名老师的信息赋值，并给老师所带的学生赋值
//	int length = sizeof(tarray) / sizeof(tarray[0]);
//	allocatespace(tarray, length);
//	//3:打印所有老师和所有学生的信息
//	
//	printall(tarray, length);
//
//	system("pause");
//	return 0;
//}