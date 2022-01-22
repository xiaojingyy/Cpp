#include<iostream>
#include<iomanip>
using namespace std;

void bubblesort(int *arr,int length)//建立一个需要传入数组地址和数组长度的函数
{
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void coutshuzu(int* arr,int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] <<setw(5);
	}
	cout << endl;
}

int main() {
	//1：先创建数组
	int arr[10];
	cout << "请输入这个长度为10的数组" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "他们的排序结果如下" << endl;
	//2:创建函数，实现冒泡排序
	int length = sizeof(arr) / sizeof(arr[0]);//计算数组的长度

	bubblesort(arr, length);//将数组首地址和数组长度传入函数
	//3:打印排序后的数组
	coutshuzu(arr, length);
	system("pause");
	return 0;
}