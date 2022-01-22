#include<iostream>
using namespace std;
#include<iomanip>
//用if语句求最大数
//void zuidashu(int a=0, int b=0)
//{
//	cout << "请输入两个整数" << endl;
//	cin >> a >> b;
//	if (a > b)
//	{
//		cout << "较大数是" << a << endl;
//		cout << "较小数是" << b << endl;
//	}
//	else if(a==b)
//	{
//		cout << "两个数一样大" << endl;
//	}
//	else if(a<b)
//	{
//		cout << "较大数是" << b << endl;
//		cout << "较小数是" << a << endl;
//	}
//}
//int main()
//{
//	int a=0, b=0;
//	zuidashu(a,b);
//
//	return 0;
//}

//上面是if语句求最大数

//下面用数组法求最大数
void m(int B[2],int a,int b)

{
	B[0] = (a < b) ? a : b;//储存较小值
	B[1] = (a > b) ? a : b;//储存较大值

}
int main()
{
	int A[2],a, b;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	m(A, a, b);//直接用数组名字代表该数组
	cout << "较大值是" << A[1] << setw(10) << "较小值是" << A[0] << endl;

	system("pause");
	return 0;
}