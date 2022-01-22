#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//英雄的结构体
struct hero
{
	string name;
	int age;
	string sex;
};

//冒泡排序，按年龄从大到小
void bubblesort(struct hero heroarray[], int length)
{
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (heroarray[j].age > heroarray[j + 1].age)
			{
				//当满足交换条件时，应整组数据进行交换，而不是将条件中的数据交换
				struct hero temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}
		}
	}
}

//打印输出
void printhero(struct hero heroarray[],int length) {
	cout << "排序后的" << endl;
	for (int i = 0; i < length; i++)
	{
		
		cout << "姓名：" << heroarray[i].name << setw(8)
			 << "年龄：" << heroarray[i].age << setw(8)
			 << "性别:"  << heroarray[i].sex << endl;
	}
}

int main() {

	//2:创建数组存放英雄
	struct hero heroarray[5]
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	
	int length = sizeof(heroarray) / sizeof(heroarray[0]);
	cout << "排序前的" << endl;
	for (int i = 0; i < length; i++)
	{
		
		cout << "姓名：" << heroarray[i].name<<setw(8)
			 << "年龄：" << heroarray[i].age <<setw(8)
			 << "性别:"  << heroarray[i].sex <<endl;
	}
	//排序数组
	bubblesort(heroarray, length);
	//最后打印
	printhero(heroarray, length);
	system("pause");
	return 0;
}