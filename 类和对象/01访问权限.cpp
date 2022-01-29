#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//public :公共权限
//protected :保护权限
//private:私有权限

class family
{
public:
	string name;
protected:
	string car;
private:
	long password;
public:
	void show()
	{
		cout << "姓名：" << name << "车辆：" << car << "密码：" << endl;
	}
};

int main()
{
	family son;
	son.name = "张三";
	//son.car = "奔驰";   这里显示不可访问，没有访问权限
	//son.password = 213456;   同样没有访问权限
	son.show();
	system("pause");
	return 0;
}