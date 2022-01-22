#include<iostream>
using namespace std;
#include <iomanip>
using std::setw;
int main()
{
	//输入一个二维数组，并以行列形式输出

	int A[2][3],i,j;
	cout << "请输入一个2行3列的数组" << endl;
	for (i = 0; i < 2; i++)
	
		for (j = 0; j < 3; j++)
			cin >> A[i][j];
	
	 
	for (i = 0; i < 2; i++)

	{
		for (j = 0; j < 3; j++)
			
			cout << setw(3)<<A[i][j] << "";
			cout << endl;

	}r

	system("pause");

	return 0;
}