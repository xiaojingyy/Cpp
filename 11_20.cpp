#include"11_20.h"
//这是自定义的计算方法
//int eleventi() {
//	double sum = 1, temp = 1;
//	cout << "请输入您要计算的最后一位数的分母" << endl;
//	int n;cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j >= 1; j--)
//		{
//			temp *= j;
//		}
//		sum += (1 / temp);
//	}
//	cout << "e=1 + 1/1! + 1/2! + 1/3! +...+ 1/" << n << "!" << "的结果是" << sum << endl;
//	system("pause");
//	system("cls");
//	return 0;
//}

int eleventi()
{
	int i = 1; double t = 1, sum = 0;
	while (t > 1e-7)
	{
		t = t / i;
		i += 1;
		sum += t;
	}
	cout << "e=1 + 1/1! + 1/2! + 1/3! + ...的结果是" << sum << endl;
	system("pause");
	system("cls");
	return 0;
}

int twelveti()
{
	/*int i = 1, j = 0 ; double sum = 0,t = 1;
	while (t > 1e-7)
	{
		t = t / i;
		i += 2;
		j += 1;
		if (j % 2 == 1)
		{
			sum += t;
		}
		else if(j%2==0)
			sum -= t;
	}*/

	double i = 1;
	int j = 1;
	double PI, t;
	PI = 1.00;
	t = 1.00;
	while (t > 1e-7)
	{
		i += 2;
		t = 1 / i;
		if (j % 2 == 1)//pi已经为1了,所以从第二项开始
			PI -= t;
		else
			PI += t;
		j += 1;
	}
	cout << "PI的值为" << 4 * PI;

	system("pause");
	system("cls");
	return 0;
}

int thirteen()
{
	int i = 1; double t = 1, sum = 1, j = 1;
	while (t > 1e-7)
	{
		i += 2;
		t = t * j / i;
		sum += t;
		j += 1;//一个tips：一个变量（j）去进行运算，一个变量（t）坐收渔翁之利
	}
	cout << "PI的值为" << sum * 2 << endl;
	system("pause");
	system("cls");
	return 0;
}

int forteen()
{
	cout << "请输入6个数" << endl;
	cout << "接下来将统计其中的正负数和零的个数" << endl;
	int arry[num];
	for (int i = 0; i < num; i++)
		cin >> arry[i];
	
	int m = 0, n = 0, zero = 0;
	for (int i = 0; i < num; i++)
	{
		if (arry[i] > 0)
		{
			m += 1;
		}
		else if (arry[i] < 0)
		{
			n += 1;
		}
		else if (arry[i] == 0)
		{
			zero += 1;
		}
	}
	cout << "正数的个数是：" << m << endl;
	cout << "负数的个数是：" << n << endl;
	cout << "零的个数是：" << zero << endl;


	system("pause");
	system("cls");
	return 0;
}

int fifteen()
{
	cout << "请输入若干个整数，将分别统计奇数和偶数之和，输入0表示结束" << endl;
	int odd_num = 0, even_num = 0;//odd_num是奇数，even_num是偶数
	while (1)
	{
		int a;
		cin >> a;
		if (a % 2 == 1)
		{
			odd_num += a;
		}
		//这里要注意偶数和0的顺序，要么就0在前，防止被归类到偶数，要么偶数在前就要加上“且”语句
		else if (a == 0)
			break;
		else if (a % 2 == 0)
		{
			even_num += a;
		}

	}
	cout << "奇数之和是：" << odd_num << endl;
	cout << "偶数之和是：" << even_num << endl;
	system("pause");
	system("cls");
	return 0;
}

int sixteen()
{
	cout << "接下来计算x的y次方" << endl;
	cout << "请输入x" << endl; int x; cin >> x;
	cout << "请输入y" << endl; int y; cin >> y;
	int multi = 1;
	for (int i = 0; i < y; i++)
	{
		multi *= x;
	}
	cout << "x的y次方=" << multi << endl;

	system("pause");
	system("cls");
	return 0;
}

int seventeen()
{
	int a, b, c;//按照个十百的顺序
	for (int i = 100; i < 1000; i++)
	{
		a = i % 10;
		b = i % 100 / 10;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i)
			cout << i << endl;
	}
	system("pause");
	system("cls");
	return 0;
}
//18题
bool perfect_number(int a)
{
	int sum = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			sum += i;
		}

	}
	if (sum == a)
		return true;
	return false;
}
int eighteen()
{
	for (int i = 1; i < 1001; i++)
	{
		if (perfect_number(i))
			cout << "1000以内的完全数有：" << i << endl;
	}
	system("pause");
	system("cls");
	return 0;
}
//19题
int fibo(int a)
{
	if (a == 1)return 1;
	else if (a == 2)return 1;
	else return fibo(a - 1) + fibo(a - 2);
}

int nineteen()
{
	int a = 1, b = 1;//数列的前两项
	cout << "你想求斐波那契数列的第几项？" << endl;
	int f; cin >> f;
	fibo(f);
	cout << "数列的第" << f << "项是：" << fibo(f) << endl;
	system("pause");
	system("cls");
	return 0;
}
//20题
int twenty()
{
	cout << "请输入一个整数" << endl;
	int number; cin >> number;
	int a;
	while (number > 0)
	{
		a = number % 10;
		cout << a;
		number /= 10;
	}
	system("pause");
	system("cls");
	return 0;
}