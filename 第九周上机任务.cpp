#include<iostream>
#include<iomanip>
using namespace std;


int one();
int tem();
int change();
int four();
int time();



int main()
{

	cout << "1--------输入两个整数，输出它们的和、积、差和差的绝对值" << endl;
	cout << "2--------输入一个华氏温度F，要求转换成摄氏温度C，C=5/9*(F-32)" << endl;
	cout << "3--------用户输入一个三位数ABC，输出它们打乱顺序后的最大值和最小值（即ABC，ACB，BAC，BCA，CAB，CBA 中的最大最小值）" << endl;
	cout << "4--------用户输入一个三位数ABC，若其数本身能被其位数之和（即A+B+C）整除，则输出商，否则输出余数。" << endl;
	cout << "5.用户输入两个时刻（HH：MM：SS），输出其时间差（要求与输入的时刻同样形式）。" << endl;

	while (1)
	{
		int n;
		cout << "请输入题号运行题目" << endl;
		cin >> n;
		if (0 == n)break;
		else
		{
			switch (n)
			{
				case 1:   one();
				case 2:   tem();
				case 3:change();
				case 4:	 four();
				case 5:  time();
				default:cout << "wrong number" << endl;
			}

		}

	}

	return 0;
}


//1. 输入两个整数，输出它们的和、积、差和差的绝对值

int one()
{
	int x, y;
	cout << "请输入两个整数" << endl;
	cin >> x >> y;
	cout << "x+y=" << x + y << endl;
	cout << "x*y=" << x * y << endl;
	int z;
	z = x - y > 0 ? (x - y) : (y - x);
	
	cout << "|x-y|=" << z << endl;

	return 0;
}

//2. 输入一个华氏温度F，要求转换成摄氏温度C，C=5/9*(F-32)

int tem()
{
	cout << "请输入一个华氏温度F,下面将转换为设施温度" << endl;
	double F,C;
	cin >> F;
	C = ((F - 32) * 5) / 9;
	cout << "该温度的摄氏温度为" << C << endl;



	return 0;
}


//3. 用户输入一个三位数ABC，输出它们打乱顺序后的最大值和最小值（即ABC，ACB，BAC，BCA，CAB，CBA 中的最大最小值）

int change()
{
	int a, b, c, d;
	int num;
	while (1)
	{
		
		cout << "请输入一个三位数" << endl;
		cout << endl;
		cout << "输入0可以退出" << endl;
		cin >> num;
		if (num < 100 || num>999)
			cout << "wrong number" << endl;
		else if (0 == num)break;
		else
		{
			a = num / 100; b = (num % 100) / 10; c = num % 10;
			if (b < c)
			{
				d = c, c = b, b = d;
			}
			if (a < b)
			{
				d = b, b = a, a = d;
			}
			if (b < c)
			{
				d = c, c = b, b = d;
			}
			

			cout << "the biggest one:" << a * 100 + b * 10 + c << endl;
			cout << "the smallest one:" << c * 100 + b * 10 + a << endl;


		}
	}

	return 0;
}

//4. 用户输入一个三位数ABC，若其数本身能被其位数之和（即A+B+C）整除，则输出商，否则输出余数。
int four()
{
	int a, b, c,num;
	cout << "请输入一个三位数" << endl;
	cin >> num;
	cout << endl;
	a = num / 100; b = (num % 100) / 10; c = num % 10;        
	if (num % (a + b + c)==0)//判断是否整除
		cout << "num/(a+b+c)=" << num / (a + b + c) << endl;
	else 
		cout << "num%(a+b+c)=" << num % (a + b + c) << endl;

	return 0;

}

//5.用户输入两个时刻（HH：MM：SS），输出其时间差（要求与输入的时刻同样形式）。

int time()
{

	int h3=0, m3=0, s3=0;
	cout << "请输入第一个时间--时/分/秒" << endl;
	int h1, m1, s1;
	cin >> h1 >> m1 >> s1;
	if (h1 > 24 || m1 > 59 || s1 > 59)
		cout << "请输入正确的时间" << endl;

	cout << "请输入第二个时间--时/分/秒" << endl;
	int h2, m2, s2;
	cin >> h2 >> m2 >> s2;
	if (h2 > 24 || m2 > 59 || s2 > 59)
		cout << "请输入正确的时间" << endl;

	if (h1 > h2)
	{
		if (s1 < s2)
		{
			s1 += 60; m1--;
		}
		if (m1 < m2)
		{
			m1 += 60; h1--;
		}

		h3 = h1 - h2;
		m3 = m1 - m2;
		s3 = s1 - s2;

	}
	else if(h1=h2)
	{
		if (m1 > m2)
		{
			if (s1 < s2)
			{
				s1 += 60; m1--; m3 = m1 - m2; s3 = s1 - s2; 
			}
		}
		else if (m1 = m2)
		{
			s3 = s1 - s2;
		}
		else if(m1 < m2)   
		{
			if (s2 <= s1)
			{
				s2 += 60; m2--; s3 = s1 - s2; m3 = m2 - m1;
			}
		}
	}
	/*else if(h2>h1)
	{
		if (s2 < s1)
		{
			s2 += 60; m2--;
		}
		if (m2 < m1)
		{
			m2 += 60; h2--;
		}

		h3 = h2 - h1;
		m3 = m2 - m1;
		s3 = s2 - s1;


	}*/

	cout << h3 << m3 << s3;



	return 0;
}