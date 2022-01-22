#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int max();
int grade();
int equation();
int triangle();
int numbers();
int sixti();
int seventi();
int sum();
int prise();
int multi();



int main()
{
	
	while (1) {
		cout << "1:输入三个数，求最大值" << endl;
		cout << "2:求方程ax2+bx+c=0的根" << endl;
		cout << "3:输入一个成绩，打印相应的登记" << endl;
		cout << "4：输入3个double类型的值，判断是否能组成三角形的三边" << endl;
		cout << "5：输入20个数，求其最大最小和平均值" << endl;
		cout << "6. 输入若干个数，设输入的第一个数为后面要输入的数的个数，求平均值及最大值" << endl;
		cout << "7. 输入若干个数，输入-999表示结束，求平均值及最大值" << endl;
		cout << "8. 求和 s=1X1 + 2X2 + 3X3 +...+ 100X100" << endl;
		cout << "9. 印度国王的奖励，求和 2的0次方加到2的63次方" << endl;
		cout << "10. 求和 s=1! + 2! + 3! +...+ 10!" <<endl;
		cout << "输入0退出程序" << endl;
		int n;
		cin >> n;
		if (0==n)break;
		
		switch (n) {
		case 1:max(); break;
		case 2:equation(); break;
		case 3:grade(); break;
		case 4:triangle(); break;
		case 5:numbers(); break;
		case 6:sixti(); break;
		case 7:seventi(); break;
		case 8:sum(); break;
		case 9:prise(); break;
		case 10:multi(); break;
		default:cout << "wrong number" << endl;
		}
	}
	system("pause");
	return 0;
}

//1:输入三个数，求最大值
int max()
{
	cout << "please enter three numbers " << endl;
	int a=0, b=0, c=0;
	cin >> a >> b >> c;
	if (a >= b) {
		if (c >= a) {
			cout << "the max number is " << c << endl;
		}
		if (c < a) {
			cout << "the max number is" << a << endl;
		}
	}
	if (a < b) {
		if (c >= b) {
			cout << "the max number is " << c << endl;
		}
		if (c < b) {
			cout << "the max number is " << b << endl;
		}
	}
	cout << endl;
	return 0;
}

//2:求方程ax2+bx+c=0的根
//思路：1:先找无解的情况；2：找a=0的情况；3：找d=0和d>0的情况，注意用sqrt(),根号
int equation() {
	cout << "请输入a,b,c的值" << endl;
	double a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	double d = b * b - 4 * a * c;
	double x = 0;

	if (d < 0) {
		cout << "这个方程无解" << endl;
	}
	if (a == 0 && b == 0) {
		cout << "这个方程无解" << endl;
	}

	if (a == 0) {
		x = -(c / b);
		cout << "方程的解是x=" << x << endl;
	}

	if (d == 0) {
		x = -b /(2 * a);
		cout << "方程的解是x=" << x << endl;
	}
	if (d > 0) {
		double x1, x2;
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "方程的解是x1="<< x1 << endl;
		cout << "x2=" << x2 << endl;

	}
	return 0;

}


//3:输入一个成绩，打印相应等级
int grade()
{
	cout << "please enter the grade" << endl;
	int grade = 0;
	cin >> grade;
	if (grade >= 90)cout << "等级为A" << endl;
	else if (grade >= 75)cout << "等级为B" << endl;
	else if (grade >= 60)cout << "等级为C" << endl;
	else if (grade < 60)cout << "等级为D" << endl;
	return 0;
}

//4:输入三个double类型值，判断是否能组成三角形
int triangle() {
	cout << "请输入三个double类型的值" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "可以组成一个三角形" << endl;
	}
	else{
		cout << "不能组成一个三角形" << endl;
	}
	return 0;
}

//5:输入20个数，求最大最小和平均值
int numbers(){
	int num[20];
	cout << "请输入20个数" << endl;
	for (int i = 0; i < 20; i++) {
		cin >> num[i];
	}
	int max = num[0], min=num[0],sum=0;
	double aver = 0;
	//最大最小的初值先任给一个数
	for (int i = 0; i < 20; i++) {
		if (num[i] >= max) {
			max = num[i];
		}
	}
	for (int i = 0; i < 20; i++) {
		if (num[i] < min) {
			min = num[i];
		}
		sum = sum + num[i];
	}
	aver = sum / 20;
	cout << "这20个数的最大值是" << max << endl;
	cout << "这20个数的最小值是" << min << endl;
	cout << "这20个数的平均值是" << aver << endl;
	return 0;
}


//6. 输入若干个数，设输入的第一个数为后面要输入的数的个数，求平均值及最大值
int sixti(){
	cout << "请输入您接下来要输入的数字的个数" << endl;
	double n, a, max=0, aver,sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a > max)max = a;
		sum += a;
	}
	aver = sum / n;
	cout << "最大数是" << max << endl;
	cout << "平均值是" << aver << endl;
	return 0;
}

//7:求若干个数，输入-999表示结束，求平均值和最大值
int seventi() {
	cout << "请输入若干个数，输入-999表示结束" << endl;
	double a,sum=0,num=0,max=0,aver = 0;
	cin >> a;
	max = a;
	sum += a;
	num ++;
	while (a!=-999)
	{	
		//cin>>a;这一步一定要放在最后写。
		//如果放在第一行的话会在输入-999的时候多执行一遍循环，导致平均值计算错误（因为带入了-999）
		if (a > max)max = a;
		sum += a;
		num++;
		cin >> a;
	}
	aver = sum / num;
	cout << "最大值是" << max << endl;
	cout << "平均值是" << aver << endl;
	return 0;
}

//8:求和 s=1X1 + 2X2 + 3X3 +...+ 100X100"

int sum() {
	int sum = 0;
	cout << "求和 s=1X1 + 2X2 + 3X3 +...+ 100X100" << endl;
	for (int i = 1; i < 101; i++)
	{
		sum += (i * i);
	}
	cout << "1X1 + 2X2 + 3X3 +...+ 100X100的值是" << sum << endl;
	return 0;
}

//9. 印度国王的奖励，求和 2的0次方加到2的63次方

int prise() {
	double sum = 1,temp=1;
	for (int i = 1; i <= 63; i++)
	{
		temp = temp * 2;
		sum += temp;
	}
	cout << "2的0次方加到2的63次方的结果是" <<sum<< endl;

	return 0;
}

//10. 求和 s=1! + 2! + 3! +...+ 10!

int multi() {
	int temp = 1,sum=0;
	for (int i = 1; i <= 10; i++)
	{
		temp = temp * i;
		sum += temp;
	}
	cout << "1! + 2! + 3! +...+ 10!的和是" << sum << endl;
	return 0;
}