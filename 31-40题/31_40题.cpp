#include<iostream>
#include<iomanip>
#include<string>
#include"31_40.h"
using namespace std;

int main()
{
	while (1)
	{	
		cout << "输入序号查看相应题目，输入0退出程序" << endl;
		cout << "1--编一程序，输入一行字符串，统计其中的小写英文字母的个数" << endl;
		cout << "2--编一程序，输入一行字符串，将其中的大写英文字母改为小写，再输出" << endl;
		cout << "3--打印杨辉三角形（帕斯卡三角形），打印10行" << endl;
		cout << "4--打印一个九九乘法表" << endl;
		cout << "5--掷骰子10000次，统计得到各点数的次数" << endl;
		cout << "6--编写函数distance，计算两点(x1, y1)和(x2, y2)之间的距离" << endl;
		cout << "7-- 写一个程序，进行体操评分，依次输入10名评委所评分数，去除一个最高分和一个最低分，再算出平均分作为选手的得分" << endl;
		cout << "8--写一函数，将一数组中的元素反转" << endl;
		cout << "9--写一函数，在一个数组中找出最大元素的位置" << endl;
		cout << "10--找出一个二维数组中的鞍点，即该元素在该行上最大，在该列上最小" << endl;
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
		default:
			cout << "请输入正确的题号" << endl;
			system("pause"); system("cls"); break;
		}
	}
	system("pause");
	return 0;
}
