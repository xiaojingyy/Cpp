#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#define max 100//通讯录上限为1000人


//设计联系人结构体 ; 设计通讯录结构体，要包含联系人结构体 ; main函数中创建通讯录（结构体变量）

struct person
{
	string name;
	int sex;
	int age;
	string phone;
	string addr;
};
struct addressbooks
{
	//联系人数组
	struct person personarray[max];
	//目前的联系人个数
	int size;
};

//添加联系人函数
void addperson(addressbooks *abs)
	{
		//先判断通讯录是否填满，如果满了就不再添加
		if (abs->size > max)
	{
		cout << "通讯录已满，若需扩容，请向yy转账500增加额度" << endl;
		return;
	}
	else
	{
		//添加联系人姓名
		string temp_name;
		cout << "请输入姓名" << endl;
		cin >> temp_name;
		abs->personarray[abs->size].name = temp_name;

		//性别
		cout << "请输入性别:" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int temp_sex = 0;
		while (1)
		{
			cin >> temp_sex;
			//只有输入了1或者2才能退出循环
			if (temp_sex == 1 || temp_sex == 2)
			{
				abs->personarray[abs->size].sex = temp_sex;
				break;//要记得跳出循环
			}
			else
				cout << "别乱搞，再来" << endl;
		}

		//年龄
		cout << "请输入年龄" << endl;
		int temp_age = 0;
		while (1)
		{
			cin >> temp_age;
			if (temp_age > 0 && temp_age < 100)
			{
				abs->personarray[abs->size].age = temp_age;
				break;
			}
			else
				cout << "太离谱了，重来！" << endl;
		}

		//电话
		cout << "请输入电话" << endl;
		string temp_phone;
		cin >> temp_phone;
		abs->personarray[abs->size].phone = temp_phone;
		cout << "再次确认电话号码为："<<temp_phone << endl;

		//住址
		cout << "请输入家庭住址" << endl;
		string address;
		cin >> address;
		abs->personarray[abs->size].addr = address;

		//增加完一个联系人后要将通讯录人数加一
		abs->size++;
		cout << "******  添加成功!  ******" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
}

//2:显示所有联系人
void showperson(addressbooks*abs)
{

	if (abs->size == 0)
		cout << "当前通讯录中无联系人" << endl;
	else
		cout << "你当前通讯录中有" << abs->size << "人" << endl;
	for (int i = 0; i < abs->size; i++)
	{
		cout	<< abs->personarray[i].name		<< setw(6) 
				<<(abs->personarray[i].sex == 1 ? "男" : "女") << setw(6)
				<< abs->personarray[i].age		<< setw(6) 
				<< abs->personarray[i].phone	<< setw(15)
				<< abs->personarray[i].addr		<< endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
}


//检测联系人是否存在，如果存在，则返回联系人所在数组中的位置，不存在则返回-1；
int exist(addressbooks* abs, string name)//传入一个通讯录和人名
{
	for (int i = 0; i <= abs->size;i++)
	{
		//查找用户输入的姓名
		if (abs->personarray[i].name == name)	
			return i;	
		else
			return -1;

	}
}
//删除联系人
void deleteperson(addressbooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;
	
	//是否找到这个人
	int whether =exist(abs, name);
	if (whether != -1)
	{
		cout << "你确定要删除这个联系人吗？" << endl;
		cout << "姓名:" << abs->personarray[whether].name << "\t"
			<< "性别:" << abs->personarray[whether].sex << "\t"
			<< "年龄:" << abs->personarray[whether].age << "\t"
			<< "电话:" << abs->personarray[whether].phone << "\t"
			<< "住址:" << abs->personarray[whether].addr << endl;

		cout << "1--确定" << "\t";
		cout << "2--算了" << endl;
		
		int yes;
		cin >> yes;
		if (yes == 1)
		{
			for (int i = whether; i < abs->size; i++)
			{
				//每个联系人的所有数据前移
				abs->personarray[i] = abs->personarray[i + 1];
			}
			abs->size--;//更新通讯录中人员数量
			cout << "删除成功" << endl;
		}
		else system("pause");

	}
	else if(whether==-1)
	{
		//查无此人
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");



}

//4:查找指定联系人信息

void findperson(addressbooks* abs)
{
	cout<<"请输入你要查找的联系人:"<<endl;
	string name;
	cin >> name;
	//判断指定的联系人是否在通讯录中
	int whether = exist(abs, name);
	if (whether != -1) {
		cout << "姓名:" << abs->personarray[whether].name  << "\t"
			 << "性别:" << abs->personarray[whether].sex   << "\t"
			 << "年龄:" << abs->personarray[whether].age   << "\t"
			 << "电话:" << abs->personarray[whether].phone << "\t"
			 << "住址:" << abs->personarray[whether].addr  << "\t";
	}
	else if (whether == -1)
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

//5:修改联系人
void modifyperson(addressbooks* abs)
{
	cout << "请输入你要修改的联系人" << endl;
	string name;
	cin >> name;
	
	int whether = exist(abs, name);
	if (whether != -1)	//找到指定联系人
	{
		cout << "你确定要修改这个联系人吗？" << endl;
		cout << "姓名:" << abs->personarray[whether].name << "\t"
			<< "性别:" << abs->personarray[whether].sex << "\t"
			<< "年龄:" << abs->personarray[whether].age << "\t"
			<< "电话:" << abs->personarray[whether].phone << setw (15)
			<< "住址:" << abs->personarray[whether].addr <<endl;

		cout << "1--确定" << "\t";
		cout << "2--算了" << endl;
		int yes;
		cin >> yes;
		if (yes == 1)
		{
			string temp_name;
			cout << "请输入姓名" << endl;
			cin >> temp_name;
			abs->personarray[whether].name = temp_name;

			//性别
			cout << "请输入性别:" << endl;
			cout << "1--男" << endl;
			cout << "2--女" << endl;
			int temp_sex = 0;
			while (1)
			{
				cin >> temp_sex;
				//只有输入了1或者2才能退出循环
				if (temp_sex == 1 || temp_sex == 2)
				{
					abs->personarray[whether].sex = temp_sex;
					break;//要记得跳出循环
				}
				else
					cout << "别乱搞，再来" << endl;

			}

			//年龄
			cout << "请输入年龄" << endl;
			int temp_age = 0;
			while (1)
			{
				cin >> temp_age;
				if (temp_age > 0 && temp_age < 100)
				{
					abs->personarray[whether].age = temp_age;
					break;
				}
				else
					cout << "太离谱了，重来！" << endl;
			}

			//电话
			cout << "请输入电话" << endl;
			string temp_phone;
			cin >> temp_phone;
			abs->personarray[whether].phone = temp_phone;
			cout << "再次确认电话号码为：" << temp_phone << endl;

			//住址
			cout << "请输入家庭住址" << endl;
			string address;
			cin >> address;
			abs->personarray[whether].addr = address;

			cout << "修改成功" << endl;

		}
		else system("pause");
			

	}
	else if (whether == -1)
	{
		cout << "查无此人" << endl;
	}

		system("pause");
		system("cls");
}

//6:清空联系人

//换个思路：只要将通讯录人数重置就可以
void allcleanperson(addressbooks* abs)
{
	cout << "你确定要清空所有联系人吗？此操作不可撤销！" << endl;
	cout << "1--我想好了" << endl;
	cout << "2--我再想想" << endl;
	int whether;
	cin >> whether;
	if (whether == 1)
	{
		cout << "请输入密码：" << endl;
		int password = 0;
		cin >> password;
		if (password == 214)
		{
			cout << "密码正确,即将清空所有联系人" << endl;
				abs->size = 0;
				cout << "通讯录已清空" << endl;
				system("pause");
				system("cls");
		}
		else {
			cout << "不知道密码就别乱搞" << endl;
			system("pause");
			system("cls");
		}
	}
	else if (whether == 2)
	{
		cout << "这就对了嘛,乖啊宝子，别乱来" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "你想咋滴，别乱来啊" << endl;
		system("pause");
		system("cls");
		return;
	}

	
}

//菜单界面
void showmenu()
{
	cout << "**************************" << endl;
	cout << "*****  1:添加联系人  *****" << endl;
	cout << "*****  2:显示联系人  *****" << endl;
	cout << "*****  3:删除联系人  *****" << endl;
	cout << "*****  4:查找联系人  *****" << endl;
	cout << "*****  5:修改联系人  *****" << endl;
	cout << "*****  6:清空联系人  *****" << endl;
	cout << "*****  0:退出通讯录  *****" << endl;
	cout << "**************************" << endl;

}
int main()
{
		//创建结构体变量
		addressbooks abs;
		//初始化通讯录当前人员个数
		abs.size = 0;

		int select = 0;
		while (1)
		{
			showmenu();
			cin >> select;
			switch (select)
			{
			case 1://添加,使用地址传递
				addperson(&abs);
				break;
			case 2://显示
				showperson(&abs);
				break;
			case 3://删除
				deleteperson(&abs);
				break;//当break前有一大段代码，需要用大括号包住
			case 4://查找
				findperson(&abs);
				break;
			case 5://修改
				modifyperson(&abs);
				break;
			case 6://清空
				allcleanperson(&abs);
				break;
			case 0://退出
				cout << "欢迎再次使用" << endl;
				return 0;
				break;
			default:cout << "wrong number" << endl;
				break;
			}
		}
		system("pause");
		return 0;
}