#include<iostream>
#include<iomanip>
using namespace std;
#define n 20

void apply()//打印数列的前20项
{
	int x = 0;
	while (x <= 0)
	{
		cout << "你想要查看第几项的值？" << endl;
		cin >> x;
		if (x < 0)
			cout << "请输入一个大于0的值" << endl;
	}
	int fibonaqi(int x = 5);
	int fibo();
	fibonaqi(n);
	fibo();
	

}

int fibonaqi(int num)//使用递归得出某一项的值
{
	int result;
	
	

	if (num == 1 || num == 2)
	{
		result = 1;
	}
	else
	{
		result = fibonaqi(num - 1) + fibonaqi(num - 2);
	}
	
	return result;//这里使用返回值就可以，不要cout

}

int fibo()
{
	int f[n] = { 1,1 };
	for (int i = 2; i < 20; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}

	for (int i = 0; i < 20; i++)
	{
		if (i % 5 == 0)  cout << endl;//一行输出五个数，更美观

		cout << setw(10) << f[i];
	}
	return 0;
}

int main()
{
	
	
	cout << "斐波那契数列的前20项如下" << endl;
	apply();

	

	system("pause");
	return 0;
}