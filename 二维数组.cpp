#include<iostream>
using namespace std;
int main()
{
	int A[2][3] = { {1,2,3},{3,4,5} };
	int B[3][2];
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			B[j][i] = A[i][j];
	}
	cout << "A=" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			cout << A[i][j] << " ";
	}
	cout << "B=" << endl;
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3; i++)
			cout << B[j][i] << " ";
	}



	return 0;
	
}