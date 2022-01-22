#include<iostream>
using namespace std;
int main()
{
	////数组的定义方式
	////元素类型  数组名字[长度]={初值列表}；
	////长度最开始是固定的正整数,一经定义，始终不变
	//int grade[] = {1,2,3,4,5,7,8,9};
	////数组内部的数据顺序从0开始
	////若数据数量小于长度，则剩下的长度赋值为0
	//int length = 0;
	//length=sizeof(grade) / sizeof(int);//计算数组的长度
	//cout << length<<endl;
	while(1)
	{
		//一维数组的输入输出
		int i, A[10];

		cout << "请输入十个数" << endl;
			for (i = 0; i < 10; i++)
				cin >> A[i];
			for (i = 9; i >= 0; i--)
				cout << A[i] << endl;

		
	}
	
		
	
	return 0;
}