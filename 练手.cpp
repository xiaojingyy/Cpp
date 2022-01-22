#include<iostream>
#include<string.h>
using namespace std;
//将十进制数转化为十以内的进制数

//int flag = 0;
//int apply()
//{
//	int change(int num,int n);
//	int num, n;
//	cout << "请输入你要转换的数num：" << endl;
//	cin >> num;
//	cout << "你想要转化为几进制？" << endl;
//	cin >> n;
//	change(num, n);
//	
//	return 0;
//
//}
//
//int change(int num, int n)
//{
//	//该函数的思路就是不断对num取余再取模
//	
//	if (num == 0)
//	{
//		if(flag==0)
//		cout << flag << endl;
//		return 0;
//	}
//	else
//	{
//		flag = 1;
//		change(num / n, n);
//		int remaind = num % 2;
//		cout <<remaind;
//
//	}
//	
//	return 0;
//
//}

//采用递归调用，实现f(x)=X的n次方的值，x和n的值在调用时输入 ，注意处理n为负数情况

int multi = 1;
double jisuan(int x,int n)
{
	if (n == 1)
		return x;

	return 
		x*jisuan(x, n - 1);

}
int cifang()
{
	int x=1,n;
	while (x!=0)
	{

		cout << "你想要求几的几次方？" << endl;
		cout << "请依次输入底数和指数" << endl;
		
		cin >> x >> n;
		while (x == 0)
		{
			cout << "底数不能为0，请重新输入,请依次输入底数和指数" << endl;
		
			cin >> x >> n;
		}
		double result = 0;
		if (n > 0)
			result = jisuan(x, n);
		else if (n < 0)
			result = jisuan(x, -n);

		cout << x << "的" << n << "次方为" << result<<endl;


	}

	return 0;

}





int main()
{
	
	return 0;
}