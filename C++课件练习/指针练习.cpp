#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//int main()
//{
//	int a = 10, b;
//	int* p1, * p2;
//	p1 = &a; p2 = &b;
//	*p2 = *p1 + 5;
//	cout << a << "," << b << endl;
//	cout << *p1 << "," << *p2 << endl;
//	cout << hex << p1 << "," << p2 << endl;
//	//hex是转化为16进制的
//	cout << &p1 << "," << &p2 << endl;
//
//	system("pause");
//	return 0;
//}


//确定两数中大小数
//int main()
//{
//	int a, b;
//	int* p1, * p2, * p;
//	cout << "请输入两个数" << endl;
//	cin >> a >> b;
//	p1 = &a; p2 = &b;
//	if (a > b)
//	{
//		p = p1; p1 = p2; p2 = p;
//	}
//	cout << "a=" << a << " b=" << b << endl;
//	cout << "max=" << *p2 << " min=" << *p1 << endl;
//	
//	system("pause");
//	return 0;
//}



////输入两个整数，按升序输出（用指针判断）
//int main()
//{
//	int a, b;
//	cout << "请输入两个数" << endl;
//	cin >> a >> b;
//	int* p1=&a, * p2=&b, temp;
//	cout << "a=" << a << " b=" << b<<endl;
//	if (*p1 > *p2)
//	{
//		temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//	}
//	cout << "max=" << *p2 << " min=" << *p1 << endl;
//	cout << "交换后" << endl;
//	cout << "a=" << a << " b=" << b << endl;
//
//	system("pause");
//	return 0;
//}



////输入三个整数，按照降序输出
//void exchange(int* p1, int* p2)
//{
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//int main()
//{
//	cout << "请输入三个整数" << endl;
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a < b)
//		exchange(&a, &b);
//	if (a < c)
//		exchange(&a, &c);
//	if (b < c)
//		exchange(&b, &c);
//	cout << a <<setw(4)<< b << setw(4) << c << endl;
//	system("pause");
//	return 0;
//}



////使用指向数组的指针变量来引用数组元素
//int main()
//{
//	int arry[10], * pointer = arry, i;
//	cout << "请输入10个数字" << endl;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> *(pointer + i);
//	}
//	cout << "arry[10]:";
//	for (i = 0; i < 10; i++)
//	{
//		cout << setw(3) << *(pointer + i);
//		cout << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}



////注意指针变量的运算顺序
//
//void main()
//{
//	int a[] = { 2,4,6};
//	int y, * p = &a[1];
//	y = (*--p)++;
//	//先--p,所以p=a[0]
//	//再y=*p
//	//然后(*p)++,所以a[0]=2+1=3;
//	cout << y;
//	cout << a[0];
//
//}


////将数组中所有元素的值对称变换
//
//int main()
//{
//	int t, a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* begin, * end;
//	begin = &a[0], end = &a[9];
//	while (begin < end)//因为这两个指针指向同一个数组，所以进行比较时有意义的
//	{
//		t = *begin;
//		*begin = *end;
//		*end = t;
//		begin++; end--;
//	}
//	begin = a;//别忘了begin已经加了好几次了，现在重新回到起点准备输出
//	while (begin < a + 10)
//		cout << *begin++ <<setw(4);
//	cout << endl;
//
//
//	system("pause");
//	return 0;
//}
//


////将数组中所有元素的值对称变换,使用函数，用指针传递参数
//void inv(int x[], int n)
//{
//	int temp, j, m = (n - 1) / 2;
//	for (int i = 0; i <= m; i++)
//	{
//		j = n - 1 - i;//注意-1这个细节
//		temp = x[i];
//		x[i] = x[j];
//		x[j] = temp;
//	}
//}
//
//int main()
//{
//	int i, a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	inv(a, 10);
//	cout << "调换顺序后的数组：" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << ",";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}




//将两个升序数组归并为一个升序数组

//先定义两个有序数组的大小
#define m 5
#define n 8
void order(int A[],int B[],int C[]) 
{
	int i = 0, j = 0, k = 0;
	while (i < m && j < n)
		if (A[i] < B[j])
			C[k++] = A[i++];
		else
			C[k++] = B[j++];
	//当有一个数组已经全部归并后，找另一个数组继续归并
	while (i < m)
		C[k++] = A[i++];
	while (j < n)
		C[k++] = B[j++];
}

int main()
{
	int A[m] = { -5,3,5,7,134 };
	int B[n] = { -2,-1,0,3,34,34,54,67 };
	int C[m + n];
	order(A, B, C);
	for (int i = 0; i < m + n; i++)
	{
		cout << C[i] << setw(4);
	}
	system("pause");
	return 0;
}

