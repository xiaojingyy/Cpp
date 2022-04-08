//#include <iostream>
//using namespace std;
//
//template<class numtype>
//class Compare
//{
//public:
//    Compare(numtype a, numtype b);
//    numtype max();
//    numtype min();
//private:
//    numtype x, y;
//};
//
//template<class numtype>
//Compare<numtype>::Compare(numtype a, numtype b)
//{
//    x = a; y = b;
//}
//
//template<class numtype>
//numtype Compare<numtype>::max()
//{
//    return (x > y) ? x : y;
//}
//
//template<class numtype>
//numtype Compare<numtype>::min  ()
//{
//    return (x < y) ? x : y;
//}
//
//int main()
//
//{
//    Compare <int> cmp1(3, 7);
//    cout << cmp1.max() << " is the Maximum of two integer numbers." << endl;
//    cout << cmp1.min() << " is the Minimum of two integer numbers." << endl << endl;
//    Compare<float> cmp2(45.78, 33.6);
//    cout << cmp2.max() << " is the Maximum of two float numbers." << endl;
//    cout << cmp2.min() << " is the Minimum of two float numbers." << endl << endl;
//    Compare<char> cmp3('a', 'A');
//    cout << cmp3.max() << " is the Maximum of two characters." << endl;
//    cout << cmp3.min() << " is the Minimum of two characters." << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//class Date;                 //对Date类的提前引用声明
//class Time
//{
//	friend void display(Date& d,Time&);
//public:
//	Time(int, int, int);
//
//	
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//class Date
//{
//	friend void display(Date&,Time&);
//public:
//	Date(int, int, int);
//	
//private:
//	int month;
//	int day;
//	int year;
//};
//
//
//Time::Time(int h, int m, int s)
//{
//	hour = h;
//	minute = m;
//	sec = s;
//}
//
//void display(Date& d,Time& t)
//{
//	cout << d.year << "/" << d.month << "/" << d.day << endl;
//	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
//}
//
//Date::Date(int m, int d, int y)
//{
//	month = m;
//	day = d;
//	year = y;
//}
//int main()
//{
//	Time t1(10, 13, 56);
//	Date d1(12, 25, 2004);
//	display(d1,t1);
//	return 0;
//}




//将下列程序中的Time类声明为Date类的友元类，通过Time类中的display函数引用Date类对象的私有数据，输出年、月、日和时、分、秒。
#include <iostream>

using namespace std;

class Date;                 //对Date类的提前引用声明

class Time

{
public:

	Time(int, int, int);

	void display(Date&);

private:

	int hour;

	int minute;

	int sec;

};

class Date

{
 	friend class Time;
public:

	Date(int, int, int);

	//friend void Time::display(Date&);

private:

	int month;

	int day;

	int year;

};

Time::Time(int h, int m, int s)

{
	hour = h;

	minute = m;

	sec = s;

}
void Time::display(Date& d)

{
	cout << d.month << "/" << d.day << "/" << d.year << endl;

	cout << hour << ":" << minute << ":" << sec << endl;

}

Date::Date(int m, int d, int y)

{
	month = m;

	day = d;

	year = y;

}

int main()

{
	Time t1(10, 13, 56);

	Date d1(12, 25, 2004);

	t1.display(d1);

	return 0;

}