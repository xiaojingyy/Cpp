#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int eleventi();






int main() {
	while (1) {
		cout << "输入题号查看对应题目，输入0表示退出" << endl;
		cout << "11. 求 e=1 + 1/1! + 1/2! + 1/3! + ..." << endl;
		cout << "12. 求PI值，PI/4 = 1 - 1/3 + 1/5 - 1/7 + ..." << endl;
		cout << "13. 求PI值，PI/2 = 1 + 1/3 + 1/3*2/5 + 1/3*2/5*3/7 + ..." << endl;
		cout << "14. 输入20个数，统计其中正数、负数和零的个数。" << endl;
		cout << "15. 输入若干个整数，计算其中的奇数之和与偶数之和，假设输入0表示结束" << endl;
		cout << "16. 写一函数，计算x的y次方（假设x、y都为正整数）" << endl;
		cout << "17. 求水仙花数（一个三位数，其各位数字立方和等于该数字本身）" << endl;
		cout << "18. 编写一个函数，确定一个整数是否为完全数（一个数，等于他的因子之和)。用这个函数确定和打印1到1000之间的所有完全数" << endl;
		cout << "19. 写一函数，求斐波那契数列的第n项" << endl;
		cout << "20. 写一个函数，取一个整数值并返回将此整数的各数字反序的数值" << endl;
		int n; cin >> n;
		if (n == 0)break;
		switch (n)
		{
		case 11:eleventi(); break;
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		default:
			break;
		}
	}
	system("pause");
	return 0;
}

int eleventi() {
	double sum = 1, temp = 1;
	cout << "请输入您要计算的最后一位数的分母" << endl;
	int n;cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			temp *= j;
		}
		sum += (1 / temp);
	}
	cout << "e=1 + 1/1! + 1/2! + 1/3! + 1/" << n << "!" << "的结果是" << sum << endl;

	return 0;
}

int twelveti()
{


	return 0;
}
