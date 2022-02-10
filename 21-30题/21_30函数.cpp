#include"21_30.h"

//第一题
//将数字反序的函数
int reverse(int a)
{
	int b = 0;
	while (a != 0)
	{
		b *= 10;
		b += (a % 10);
		a /= 10;
	}
	return b;
}
int first()
{
	cout << "请输入一个整数" << endl;
	int n; cin >> n;
	cout << "这个整数反序打印是" << reverse(n) << endl;
	system("pause");
	system("cls");
	return 0;
}
//第二题
//间隔打印的函数
void print_gap(int n)
{
	while (n != 0)
	{
		int i;
		i = n % 10;
		cout << i << setw(2) ;
		n /= 10;
	}
}
int second()
{
	cout << "请输入一个整数，接下来将按照顺序打印" << endl;
	int n; cin >> n;
	//灵机一动：只要使用两次第一题的反转函数就可以了，但是这样不明显，和直接打印这个数字没什么区别
	cout << "这个数按照顺序打印是" << reverse(reverse(n));
	//利用反序函数再在反序时加入setw就可以
	cout << "这个数按照间隔顺序打印是"; print_gap(reverse(n));
	system("pause");
	system("cls");
	return 0;
}
//第三题
//各位数相加的函数
int addnumbers(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int third()
{
	cout << "请输入一个整数" << endl;
	int n; cin >> n;
	cout << "这个整数各位数之和是" << addnumbers(n) << endl;
	system("pause");
	system("cls");
	return 0;
}
//第四题
//判断是否素数
bool prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int forth()
{
	cout << "请输入一个整数" << endl;
	int n; cin >> n;
	if (prime(n))
		cout << "这是素数" << endl;
	else if (n == 1)
	{
		cout << "数学规定1不是素数" << endl;
	}
	else 
		cout << "这不是素数" << endl;
	cout << "1000以内数素数有" << endl;
	int endline = 0;
	for (int i = 2; i < 1000; i++)
	{	
		if (prime(i))
		{
			endline++;
			cout << i << setw(4);
			if (endline % 10 == 0)
				cout << endl;
		}
	}
	cout << endl;
	system("pause");
	system("cls");
	return 0;
}
//第五题
//先用一个数组储存1-1000这些数字
//用一个函数遍历数组，用一个变量不断遍历数组的值，再用循环判断素数，非素数就等于0
void hanshu(int arry[1001])
{
	for (int i = 2; i < 1001; i++)//遍历数组
	{
		//从2开始
		for (int j = i+1; j < 1001; j++)//从当前数字开始再次遍历数组，用下标找，找到之后将该数据归零
		{
			if (j % i == 0)
			{
				arry[j] = 0;
			}
		}
	}
	int newline = 0;
	for (int i = 1; i < 1001; i++)
	{
		if (arry[i] != 0)
		{
			newline++;
			cout << arry[i] << setw(4);
			if (newline % 10 == 0)
			cout << endl;
		}
	}
}

//改进版：找到一个数之后直接找它的倍数，将它的倍数变为0
void hanshu_pro(int arry[1001])
{
	for (int i = 2; i < 1001; i++)
	{
		int j = 2 * i;//此时的j是大于i的第一个倍数
		while (j < 1001)
		{
			arry[j] = 0;
			j += i;//不断地找到i的倍数
		}
	}
	int newline = 0;
	for (int i = 2; i < 1001; i++)
	{
		if (arry[i] != 0)
		{
			newline++;
			cout << arry[i] << setw(4);
			if (newline % 10 == 0)
				cout << endl;
		}
	}
}
int fifth()
{
	int arry[1001];
	for (int i = 1; i < 1001; i++)
	{
		arry[i] = i;
	}
	arry[0] = 0;arry[1] = 0;
	hanshu(arry);
	cout << endl;
	cout << "下面是pro版打印的" << endl;
	hanshu_pro(arry);
	cout << endl;
	system("pause");
	system("cls");
	return 0;
}
//第六题  
//闰年：可以被4但是不能被100整除的或者可以被400整除的
bool leap_year(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		return true;
	else
		return false;
}

int sixth()
{
	cout << "请输入你想要判断的年份" << endl;
	int n; cin >> n;
	if (leap_year(n))
	{
		cout << n << "是闰年" << endl;
		cout << "知识小站" << endl;
		cout << "1582年以来的置闰规则:" << endl;
		cout << "普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）" << endl;
		cout << "世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。" << endl;
	}
	else
	{
		cout << n << "不是闰年" << endl;
		cout << "知识小站" << endl;
		cout << "1582年以来的置闰规则:"<<endl;
		cout<<"普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）" << endl;
		cout << "世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。" << endl;
	}
		
	system("pause");
	system("cls");
	return 0;
}
//第七题
void exchange(int& a, int& b)
{
	int t;
	t = a; a = b; b = t;
}
int seventh()
{
	cout << "请输入两个整数" << endl;
	int a, b; cin >> a;cin>> b;
	exchange(a, b);
	cout << "a=" << a<<endl;
	cout << "b=" << b<<endl;
	system("pause");
	system("cls");
	return 0;
}
//第八题
//辗转相除法
int zhanzhuan(int& a, int& b)
{
	int c = 1;
	while (c != 0)
	{
		c = a % b;
		a = b; b = c;
	}
	return a;
}
int eighth()
{
	positive_number:
	cout << "请输入两个正整数" << endl;
	int a, b; cin >> a; cin >> b;
	if (a <= 0 || b <= 0)
	{
		cout << "别乱来" << endl;
		goto positive_number;
	}
	else
	{
		cout << "他们的最大公约数是" << zhanzhuan(a, b) << endl;
	}
	system("pause");
	system("cls");
	return 0;
}

//第九题
//两个数的最小公倍数等于两数相乘再除以最大公因数
int ninth()
{
	cout << "请输入两个数" << endl;
	int a, b; cin >> a; cin >> b;
	//直接套用辗转相除法求最大公因数
	cout << "最小公倍数=" << a * b / zhanzhuan(a, b) << endl;

	//傻子方法
	/*int i = a-1;
	while (i)
	{
		i++;
		if (i % a == 0 && i % b == 0)
			break;
	}
	cout << i << endl;*/
	system("pause");
	system("cls");
	return 0;
}
int tenth()
{
	for (int a = 0; a <= 20; a++)
		for (int b = 0; b <= 33; b++)
			for (int c = 0; c <= 100 - a - b; c += 3)
				if ((a + b + c == 100) && (5 * a + 3 * b + c / 3 == 100))
					cout <<"公鸡："<< a <<" 母鸡："<< b  <<" 鸡仔："<< c << endl;
	system("pause");
	system("cls");
	return 0;
}
