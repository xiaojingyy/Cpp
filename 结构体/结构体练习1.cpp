#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//目的：创建一个英雄的结构体并将他们按照指定条件排序
//英雄的结构体应包括：姓名，性别，年龄，身高，体重，

//创建英雄结构体
//定义英雄结构体数据
//写一个按照指定条件排序的函数并测试后封装

struct hero {
	string name;
	int sex;
	int age;
	int height;
	int weight;

};

void printarray(struct hero* heroarray, int length)
{
	cout	<< "姓名" << "\t"
			<< "性别" << "\t"
			<< "年龄" << "\t"
			<< "身高" << "\t"
			<< "体重" << "\t"<<endl;
	for (int i = 0; i < length; i++)
	{
		
		cout	<<  heroarray[i].name << "\t"
				<<  (heroarray[i].sex == 1 ? "男" : "女") << "\t"
				<<  heroarray[i].age << "\t"
				<<  heroarray[i].height << "\t"
				<<  heroarray[i].weight << "\t" << endl;
	}
}

void bubblesort(struct hero* heroarray, int length,int select)
{
		if(select==1)
			cout << "接下来按照年龄排序" << endl;
		else if(select==2)
			cout << "接下来按照身高排序" << endl;
		else if(select==3)
			cout << "接下来按照体重排序" << endl;

		for (int i = 0; i < length - 1; i++)
		{
			for (int j = 0; j < length - 1 - i; j++)
			{
				if (select == 1)
				{	
					if (heroarray[j].age > heroarray[j + 1].age)
					{
						struct hero temp = heroarray[j];
						heroarray[j] = heroarray[j + 1];
						heroarray[j + 1] = temp;
					}
				}
				if (select == 2)
				{
					if (heroarray[j].height > heroarray[j + 1].height)
					{
						struct hero temp = heroarray[j];
						heroarray[j] = heroarray[j + 1];
						heroarray[j + 1] = temp;
					}
				}
				if (select == 3)
				{
					if (heroarray[j].weight > heroarray[j + 1].weight)
					{
						struct hero temp = heroarray[j];
						heroarray[j] = heroarray[j + 1];
						heroarray[j + 1] = temp;
					}
				}
			}
		}

		cout << "姓名" << "\t"
			<< "性别" << "\t"
			<< "年龄" << "\t"
			<< "身高" << "\t"
			<< "体重" << "\t" << endl;
		for (int i = 0; i < length; i++)
		{
			cout << heroarray[i].name << "\t"
				<< (heroarray[i].sex == 1 ? "男" : "女") << "\t"
				<< heroarray[i].age << "\t"
				<< heroarray[i].height << "\t"
				<< heroarray[i].weight << "\t" << endl;
		}
		system("pause");
		
}
int main() {
	struct hero heroarray[5] = {
		{"马超",1,23,182,130},
		{"白起",1,19,185,145},
		{"貂蝉",2,19,168,100},
		{"亚瑟",1,24,190,160},
		{"老夫子",1,70,178,140}
	};
	int length = sizeof(heroarray) / sizeof(heroarray[0]);
	printarray(heroarray, length);
	while (1)
	{
		cout << endl;
		cout << "你想按照什么条件将这些英雄排序？(输入0表示退出)" << endl;
		cout << "1--年龄" << endl;
		cout << "2--身高" << endl;
		cout << "3--体重" << endl;
		int select;
		cin >> select;
		if (select == 0)break;
		bubblesort(heroarray, length,select);
	}
	system("pause");
	return 0;
}
