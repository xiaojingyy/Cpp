#include<iostream>
#include<iomanip>
using namespace std;
#define n 6
int main()
{
	int i, j,A[n+1];
	cout << "请输入这个长度为6的一维数组" << endl;
	for (i=1; i <= n; i++)   cin >> A[i];//输入数组
	
	for (int i = 1; i < n; i++)//
	{
		int index = i;
		for (int j = i + 1; j <= n; j++)
		{
			if (A[index] > A[j])
			{
				index = j;
			}
		}
		if (index != i)
		{
			A[0] = A[index];
			A[index] = A[i];
			A[i] = A[0];
		}
	}



	/*for (j = 1; j <= n - 1; j++)
	{
		int index = A[j];
		int y = j;
		for ( i = j+1; i < n; i++)
		{
			if (A[i]<index)
			{
				index = A[i];
				y = i;
			}
		}
		if (y != j)
		{
			A[y] = A[j];
			A[j] = index;
		}*/

	


	for (i = 1; i <= n; i++)
		cout << A[i] << setw(3) << "";




	return 0;
}