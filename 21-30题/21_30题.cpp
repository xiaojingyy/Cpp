#include<iostream>
#include<iomanip>
#include<string>
#include"21_30.h"
using namespace std;

int main()
{			
	while (1)
	{
		cout << "输入序号查看相应题目，输入0退出程序" << endl;
		cout << "1--写一个函数，将一个整数的各位数字的反序打印" << endl;
		cout << "2--写一个函数，将一个整数的各位数字的按顺序打印出来" << endl;
		cout << "3--求一个整数的各位数之和的函数" << endl;
		cout << "4--写一函数，判断某个数是否素数，以及求1－1000之内的素数" << endl;
		cout << "5--用筛法求1－1000之内的素数" << endl;
		cout << "6--判断某一年是否闰年的函数" << endl;
		cout << "7--写一个函数，交换两个整型变量的值" << endl;
		cout << "8--求两个数的最大公约数, 欧几里德算法(辗转相除法）" << endl;
		cout << "9--求两个数的最小公倍数" << endl;
		cout << "10--百钱买百鸡问题：鸡翁一值钱五，鸡母一值钱三，鸡雏三值钱一，百钱买百鸡，问鸡翁、母、雏各几何？" << endl;
		int n; cin >> n;
		if (n == 0)
			break;
		switch (n)
		{
		case 1:	first();	break;
		case 2:	second();	break;
		case 3:	third();	break;
		case 4:	forth();	break;
		case 5:	fifth();	break;
		case 6:	sixth();	break;
		case 7:	seventh();	break;
		case 8:	eighth();	break;
		case 9:	ninth();	break;
		case 10:tenth();	break;
		default:			break;
		}
	}
	system("pause");
	return 0;
}
