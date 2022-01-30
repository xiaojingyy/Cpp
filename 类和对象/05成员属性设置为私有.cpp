#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


class person
{
public:
	//设置姓名
	void setname(string temp_name)
	{
		name = temp_name;
	}
	//获取姓名
	string getname()
	{
		return name;
	}
	//设置年龄
	void setage(int temp_age)
	{
		age = temp_age;
		if (temp_age < 0 || temp_age>150)
		{
			age = 0;
			cout << "太离谱了！" << endl;
			return;
		}
		
	}
	//获取年龄
	int getage()
	{
		return age;
	}
	//设置情人
	void setlover(string temp_lover)
	{
		lover = temp_lover;
	}
private:
	//设置可读可写
	string name;
	//设置只读
	int age;
	//设置只写
	string lover;
};

int main()
{
	person p;
	p.setname("张三");
	cout << "姓名：" << p.getname() << endl;
	p.setage(18);
	cout << "年龄为：" << p.getage() << endl;
	//设置情人
	p.setlover("王冰冰");
	//cout << "情人是：" << p.setlover() << endl;
	//上面是只写的权限，不可读

	system("pause");
	return 0;
}