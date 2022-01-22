#include<iostream>
#include<iomanip>
using namespace std;


//1.编写程序，从键盘输入一个英文字母。如果是大写字母，则输出它对应的小写字母；如果是小写字母，则输出它对应的大写字母

int change()
{
	while (1)
	{
		char num = 0;
		cout << "请输入一个英文字母" << endl;
		cin >> num;
		if (num == 0)
			break;
		else if (num > 35 && num < 90)
		{
			cout << char(num + 32)<<endl;
		}
		else if (num > 97 && num <122)
		{
			cout << char(num-32);
		}
	}
	return 0;
}

//使用switch语句，将用户输入的分数（0-100）进行定级，其中59分及以下为Fail，60至69为Pass，70至89为Good，90至100为Excellent。根据用户输入分数，输出其对应等级。

int score()
{
	int num;
	



	return 0;
}


int main()
{
	change();

	system("pause");
	return 0;
}