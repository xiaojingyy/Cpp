#include<stdio.h>
#include<iostream>
#include<String.h>
using namespace std;
int cnt = 0;
int flag = 1;
char a[255];


//递归 

void Convert(int i,int b)
{
	if(i==0)//递归出口
	{
		return;
	}
	a[cnt++]=i%b;
	Convert(i/b,b);
}

//
////非递归 
//void Convert(int i, int b)
//{
//	while (i)
//	{
//		a[cnt++] = i % b;
//		i = i / b;
//	}
//}


int Print(int& num)
{
	for (int i = cnt - 1; i > -1; i--)
	{
		if (a[i] < 10)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%c", a[i] + 'A' - 10);
		}
	}
	printf("\n");
	printf("继续吗?(1(Y)/0(N)");
	num = 0;
	scanf_s("%d", &flag);
	return flag;
}

int main()
{
	while (flag)
	{
		int integer, base;
		printf("输入一个大于0的任意正整数：");
		scanf_s("%d", &integer);
		printf("输入进制数的基数:(2~16)");
		scanf_s("%d", &base);
		if (base > 16 || base < 2)
		{
			printf("输入错误!请输入2~16以内的进制数基数:");
			scanf_s("%d", &base);
		}
		Convert(integer, base);
		flag = Print(cnt);
	}
	return 0;
}

