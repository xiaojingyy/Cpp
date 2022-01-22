#include<iostream>
#include<iomanip>
#define n 7
using namespace std;
int main()
{
	int A[n], i, j;//数组，内循环变量，外循环变量
	int t = 0;//暂时储存数值的一个变量

	cout << "请输入这个长度为n的一维数组" << endl;
	for (i = 1; i <n; i++)   cin >> A[i];//输入数组

	for (int i = 2; i <n; i++)
	{
			A[0] = A[i];   //先将每一次的最小数（也就是最前面那个数）保留
			int j = i - 1; //j是A[i]左边的数的下标
			
			
			while (A[0]<A[j])
				{
					A[j + 1] = A[j]; 
					j = j - 1;
				}

			A[j + 1] = A[0];


	}


	for (i = 1; i <n; i++)
		cout << A[i] << setw(3) << "";


	system("pause");
	return 0;
}