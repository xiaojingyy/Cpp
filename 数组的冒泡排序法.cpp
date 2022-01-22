#include<iostream>
#include<iomanip>
using namespace std;
////用冒泡法排序
//#define n 6//这是定义了数组的元素个数
//int main()
//{
//	int A[n+1], i, j;//数组，内循环变量，外循环变量
//
//
//
//
//	cout << "请输入这个长度为6的一维数组" << endl;
//	for (i = 1; i <= n; i++)   cin >> A[i];//让数组从1开始储存数据，使得程序可读性更高
//	int exchange = 6;
//	while (exchange)//当exchange没有改变数值才能跳出
//	{
//		int bound = exchange;//bound是已经交换了的和未交换的数据的边界
//		exchange  = 0;       //如果前后数据未交换，那么exchange为0不会改变，将跳出while循环
//		for (int i = 1; i < bound; i++)
//		{
//			if (A[i] > A[i + 1])
//			{
//				A[0] = A[i];
//				A[i] = A[i + 1];
//				A[i + 1] = A[0];
//				exchange = i;//exchange记录下最后一次交换的较大数的左边作为边界，表示下一次冒泡只需要执行到这个边界
//
//			}
//
//		}
//
//
//
//	}
//
//
//
//	//for (j = 0; j < n - 1; j++)//这是外循环执行的趟数
//	//{
//	//	int flag = 0;
//	//	for (i = 0; i < n - 1 - j; i++)//随着外循环次数的增加，内循环次数也会减少
//	//	{
//
//	//		if (A[i] >= A[i + 1])
//	//		{
//	//			t = A[i + 1]; A[i + 1] = A[i]; A[i] = t; //两数相比，大数沉底
//	//			flag = 1;
//	//		}
//
//
//	//	}
//	//	if (flag == 0)
//	//		break;
//	//}
//				
//		//一定要注意，在一个循环语句下
//		//如果有多个需要执行的语句要么用逗号隔开，不用分号
//		//要么用了分号就要用大括号隔开
//	
//
//	for (i = 1; i <= n; i++)
//		cout << A[i] <<setw(3)<< "";
//
//
//	system("pause");
//	return 0;
//}



bool judgePrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= 1000; i++) {
        if (judgePrime(i)) cout << setw(8) << i;
    }

    cout << endl;
    return 0;
}
