//#include <iostream>
//using namespace std;
//class CDate
//{
//	public:
//	void Set(int m, int d, int y)
//	{
//		month = m;
//		day = d;
//		year = y;
//	}
//	int IsLeapYear()
//	{
//		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//	}
//
//	void Print()
//	{
//		cout << month << "/" << day << "/" << year << endl;
//	}
//private:
//	int  month;    int  day;    int  year;
//};
//void main()
//{
//	CDate  a;
//		a.Set(10, 15, 2007);
//	a.Print();
//}



//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	void set_time()
//	{
//		cout << "请按照时分秒的顺序输入时间" << endl;
//		cin >> this->hour;
//		cin >> this->minute;
//		cin >> this->sec;
//	}
//	void show_time()
//	{
//		cout << "您输入的时间是" << endl;
//		cout << this->hour << ":" << this->minute << ":" << this->sec << endl;
//	}
//	int hour;
//	int minute;
//	int sec;
//};
//
//
//int main()
//{
//	Time t1;
//	t1.set_time();
//	t1.show_time();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class cube
//{
//public:
//	void set_data()
//	{
//		cout << "请输入长方体的长" << endl;
//		cin >> this->length;
//		cout << "请输入长方体的宽" << endl;
//		cin >> this->width;
//		cout << "请输入长方体的高" << endl;
//		cin >> this->height;
//	}
//
//	int count_size()
//	{
//		return (this->height * this->length * this->width);
//	}
//	int length;
//	int width;
//	int height;
//};
//
//int main()
//{
//	cube c1;
//	c1.set_data();
//	cout << "该长方体的体积为" << c1.count_size() << endl;
//
//	system("pause");
//	return 0;
//}





//试设计一个复数类，该类有实部和虚部两个成员数据，成员数据采用私有访问权限，同时该类有两个公用成员函数
//分别用来设置成员数据和输出成员数据，在主函数中分别采用对象方式，指针方式和引用方式来调用该类的公有函数设置和输出成员数据。


#include<iostream>
using namespace std;

class complex_number
{
public:
	void set_part()
	{
		cout << "请输入实部：" << endl;
		cin >> this->real_part;
		cout << "请输入虚部：" << endl;
		cin >> this->imaginary_part;
	}
	
	void show_complex_number()
	{
		cout << "该虚数为:" << endl;
		if(this->imaginary_part>0)
			cout << this->real_part << "+" << this->imaginary_part << "i" << endl;
		else if(this->imaginary_part < 0)
			cout << this->real_part  << this->imaginary_part << "i" << endl;
		else
			cout << this->real_part  <<endl;

	}
private:
	int real_part;      //实部
	int imaginary_part; //虚部
};

int main()
{
	complex_number num1;

	//在主函数中分别采用对象方式，指针方式和引用方式来调用该类的公有函数设置和输出成员数据。
	num1.set_part();
	num1.show_complex_number();
	

	system("pause");
	return 0;
}