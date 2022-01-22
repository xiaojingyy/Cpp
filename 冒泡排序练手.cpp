//#include<iostream>
//#include<iomanip>
//using namespace std;
////int main() {
////	int arr[7]{ 8,4,8,2,5,0,2 };
////	//降序排列
////	for (int j = 0; j < 7; j++) //国际循环，每加一就执行一遍交换
////	{	
////		for (int i = 0; i < 7; i++)//国内循环，走一遍流程
////		{
////			if (arr[i] < arr[i + 1])
////			{
////				int temp = arr[i];
////				arr[i] = arr[i + 1];
////				arr[i + 1] = temp;
////			}
////
////		}
////	}
////	for (int i = 0; i < 7; i++)
////	{
////		cout << arr[i]  << endl;
////	}
////
////
////
////
////	system("pause");
////	return 0;
////}
////
//
//
////选择排序法
//int main() {
//	int N[6] = { 3,7,6,5,2,4 };
//	for (int i = 0; i < 6; i++)
//	{
//		int index = i;
//		for (int j = i + 1; j < 6; j++)
//		{
//			if (N[index] > N[j])
//			{
//				index = j;
//			}
//		}
//		if (index != i)
//		{
//			int a = N[i];
//			N[i] = N[index];;
//			N[index] = a;
//		}
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		cout <<N[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}