#include<iostream>
#include<string>
#include <fstream>
#include <iomanip>
#include<sstream>
const int tmax = 10;
using namespace std;

//创建员工类
class Person
{
public:
	string name;
	int  sex;
	int department;//部门（销售，外勤，后勤）
	int position;//职位（经理，技术人员，销售人员，销售经理）
	int  level;//级别（初中高）
	int num = 0;
	int salary = 3000;
	//员工生病没工作的天数
	int ill_nowork = 0;
	//已经带薪休假的天数
	int salary_nowork = 0;
	Person(string nam = " ", int s = 0, int d = 0, int p = 0, int l = 0)
	{
		name = nam;
		sex = s;
		department = d;
		position = p;
		level = l;
	}
	//父类中的虚函数，子类重写
	//使用virtual后，子类同名函数不会被覆盖
	virtual void input();//输入信息
	virtual void output();//打印信息
	//自动赋值编号的函数
	int set_num();
	//计算工资函数
	int count_salary();
	//查找
	int getnum(){return this->num;}
	string getname(){return name;}
};


//输入信息类
void Person::input()
{
	cout << "姓名(string)：";
	cin >> name;


	cout << "性别：";
	cout << "1--男 ，2--女" << endl;
	cin >> sex;

	int space = 7;

	cout << "所在部门：";
	cout << "1--销售部  " << setw(space) << "2--外勤部  " << setw(space) << "3--后勤部" << endl;
	cin >> department;


	cout << "职位：";
	cout << "1--经理  " << setw(space) << "2--技术人员  " << setw(space) << "3--销售人员  " << setw(space) << "4--销售经理" << setw(5) << endl;
	cin >> position;


	cout << "级别：";
	cout << "1--初级  " << setw(space) << "2--中级  " << setw(space) << "3--高级" << setw(space) << endl;
	cin >> level;


	cout << "该员工的编号是" << this->set_num() << endl;
}
//输出信息类
void Person::output()
{
	int space = 15;
	cout << endl << setiosflags(ios::left) << "  姓名： " << setw(space) << this->name;

	cout << "  编号： " << setw(space) << this->num;


	if (this->sex == 1)
		cout << "  性别： " << "男" << endl;
	else if (this->sex == 2)
		cout << "  性别： " << "女" << endl;



	if (this->department == 1)
		cout << "  部门： " << setw(space) << "销售部";
	else if (this->department == 2)
		cout << "  部门： " << setw(space) << "外勤部";
	else if (this->department == 3)
		cout << "  部门： " << setw(space) << "后勤部";

	if (this->position == 1)
		cout << "  职位： " << setw(space) << "部门经理";
	else if (this->position == 2)
		cout << "  职位： " << setw(space) << "技术人员";
	else if (this->position == 3)
		cout << "  职位： " << setw(space) << "销售人员";
	else if (this->position == 4)
		cout << "  职位： " << setw(space) << "销售经理";


	if (this->level == 1)
		cout << "  级别： " << "初级";
	else if (this->level == 2)
		cout << "  级别： " << "中级";
	else if (this->level  == 3)
		cout << "  级别： " << "高级";

	cout << endl;
	
	cout<< "  请病假:" << this->ill_nowork << setw(space-1) << "小时";
	cout<< " 带薪休假:" << this->salary_nowork << setw(space- 3) << "小时";
	cout<< "  工资：" << this->count_salary() << "元";

	cout << endl << endl;

	

}


//自动赋值编号的函数
int i = 1;//编号的后两位顺序，使用全局变量
int Person::set_num()
{
	int temp_num = 1;
	//编号案例：  
	//张三 男 销售部 初级 技术人员    1112
	//王芳 女 后勤部 中级 经理        2321

	if (this->sex == 2)
		temp_num = 2;

	//统一乘以十，简化后续操作
	temp_num *= 10;
	//部门
	if (this->department == 1)//销售部
		temp_num += 1;
	else if (this->department == 2)//外勤部
		temp_num += 2;
	else if (this->department == 3)//后勤部
		temp_num += 3;


	//统一乘以十，简化后续操作
	temp_num *= 10;
	//级别
	if (this->level == 1)//初级
		temp_num += 1;
	else if (this->level == 2)//中级
		temp_num += 2;
	else if (this->level == 3)//高级
		temp_num += 3;


	//统一乘以十，简化后续操作
	temp_num *= 10;
	//职位
	if (this->position == 1)//经理
		temp_num += 1;
	else if (this->position == 2)//技术人员
		temp_num += 2;
	else if (this->position == 3)//销售人员
		temp_num += 3;
	else if (this->position == 4)//销售经理
		temp_num += 4;

	//乘以100，后续两位数字就是顺序，以防同样部门职位级别的人的编号是一样的
	temp_num *= 100;


	//还要按照入职顺序给编号最后两位赋值
	temp_num += i;
	i += 1;


	//最后别忘记赋值给员工的编号
	this->num = temp_num;

	return this->num;
	//这里只用返回数据就可以，然后根据不同使用场景另外写就可以
}


//工资函数，计算工资
int Person::count_salary()
{
	int temp_salary = 0;

	//以部门设置基础工资
	//销售部，外勤部，后勤部
	if (this->department == 1)
		temp_salary = 4300;
	else if (this->department == 2)
		temp_salary = 4500;
	else if (this->department == 3)
		temp_salary = 4200;

	//根据职位加上不同的工资
	//经理，技术人员，销售人员，销售经理
	if (this->position == 1)
		temp_salary += 600;
	else if (this->position == 2)
		temp_salary += 500;
	else if (this->position == 3)
		temp_salary += 300;
	else if (this->position == 4)
		temp_salary += 600;


	//再根据职位加上不同的工资
	//初中高级
	if (this->level == 1)
		temp_salary += 200;
	else if (this->level == 2)
		temp_salary += 400;
	else if (this->level == 3)
		temp_salary += 600;


	//最后记得赋值给工资
	this->salary = temp_salary;
	return this->salary;
}

class person_mana :public Person//继承person类
{
public:
	Person p[tmax];//定义员工对象数组，储存员工信息
	int top;//员工实时人数
	
	person_mana();//构造函数，用于初始化员工信息
	void add();//添加函数
	void show();//显示函数

	//管理员查找员工，分编号和姓名查找
	void search();
	void search_num();
	void search_name();

	//员工查看个人信息
	void e_check(int e_num);//传入员工编号

	//编辑信息函数，分编号和姓名查找
	void edit();
	void edit_num();
	void edit_name();


	//删除信息函数，分编号和姓名查找
	void Delete();
	void Delete_num();
	void Delete_name();

	//显示员工总数
	void total();

	//请假函数，分别跳转到下面两个函数
	void record_vacation_day(int num);
	//申请病假
	void judge_ill_vacation(int i);
	//申请带薪休假
	void judge_salary_vacation(int i);


	//保存和读取
	void save();
	void read();

	//判断文件是否为空的标志
	bool m_fileifempty;
	int get_EmpNum();

	//初始化员工
	void t_Emp();
};

person_mana::person_mana()
{
	//top要初始化，否则报错！！！！！
	top = 0;
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	//1：文件不存在时
	if (!ifs.is_open())
	{
		//cout << "文件不存在！" << endl;

		//初始化文件是否为空
		this->m_fileifempty = true;//就是说，文件为空是对的

		ifs.close();//记得关闭文件
		return;
	}

	//2:文件不存在时
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//有文件但是没有内容
		//cout << "文件为空！" << endl;

		//初始化人数
		top = 0;

		//初始化文件是否为空
		this->m_fileifempty = true;//就是说，文件为空是对的

		ifs.close();//记得关闭文件
		return;
	}

	//3：当文件存在并且有数据时


	int num = this->get_EmpNum();
	//cout << "职工人数为：" << num << endl;
	/*top = num;*/
	this->t_Emp();

	////测试代码
	//for (int i = 0; i < top; i++)
	//{
	//	p[i].output();
	//}
}

//添加函数
void person_mana::add()
{
	if (top >= tmax)
	{
		cout << "空间已满，不能添加!!!" << endl;
		system("pause");
		system("cls");
		return;
	}
	Person pe;
	cout << "请输入添加人员信息：" << endl;
	pe.input();
	p[top] = pe;//将新创建的对象传入到数组中
	cout << "添加成功!!!" << endl;
	cout << endl;
	top++;//要记得在每次添加员工之后增长已添加的员工数量
	this->save();

	//更新员工人数不为空的标志
	this->m_fileifempty = false;//文件为空是假的

	system("cls");

	return;
}


//显示所有员工
void person_mana::show()
{
	if (top == 0) { cout << "目前没有员工，请您添加员工信息！" << endl; system("pause"); system("cls"); return; }
	cout << "姓名" 
		 <<setw(12) << "编号" 
		 << setw(9) << "性别" 
		 << setw(8) << "部门" 
		 << setw(10) << "职位" 
		 << setw(10) << "级别" 
		 << setw(13) << "病假时间" 
		 << setw(11) << "薪假时间" 
		 << setw(8) << "工资" << endl;

	string se = "", de = "", po = "", le = "";

	for (int i = 0; i < top; i++)
	{
		//判断性别
		if (p[i].sex == 1)
			se = "男";
		else if(p[i].sex == 2)
			se = "女";
		//判断部门
		if (p[i].department == 1)
			de = "销售部";
		else if(p[i].department==2)
			de = "外勤部";
		else if(p[i].department==3)
			de = "后勤部";
		//判断职位
		if (p[i].position == 1)
			po = "部门经理";
		else if (p[i].position == 2)
			po = "技术人员";
		else if (p[i].position == 3)
			po = "销售人员";
		else if (p[i].position == 4)
			po = "销售经理";
		//判断级别
		if (p[i].level == 1)
			le = "初级";
		else if (p[i].level == 2)
			le = "中级";
		else if (p[i].level == 3)
			le = "高级";

		//计算工资		
		p[i].count_salary();

		cout << setw(6) << p[i].name
			<< setw(11) << p[i].num
			<< setw(7) << se
			<< setw(10) << de
			<< setw(12) << po
			<< setw(7) << le
			<< setw(10) << p[i].ill_nowork
			<< setw(10) << p[i].salary_nowork
			<< setw(12) << p[i].salary << endl;
	}

	cout << endl;
	system("pause");
	system("cls");
}

//员工查看个人信息函数
void person_mana::e_check(int e_num)//员工自己传入编号
{
	for (int i = 0; i <= person_mana::top; i++)
	{
		
		if (p[i].num == e_num)
		{
			cout << "top=" << top << endl;
			p[i].output();
			system("pause");
			return;
		}
	}
	//如果没有return就会输出下面的
	cout << "未查询到此人信息" << endl;
	system("pause");
}

//请假函数
void person_mana::record_vacation_day(int e_num)//传入编号
{
	int xiabiao = 0;
	for (int i = 0; i <= top; i++)
	{
		if (p[i].num == e_num)//由编号找到下标
		{
			xiabiao = i;//记录下标，后面两个函数要用
			cout << "你的姓名：" << p[xiabiao].name << endl;
			cout << "你的病假时间剩余：" << 16 - p[xiabiao].ill_nowork << endl;
			cout << "你的带薪休假的时间剩余：" << 24 - p[xiabiao].salary_nowork << endl;

			system("pause");

			while (1)
			{
				cout << "请选择你要进行的操作:\t\t1--请病假\t\t2--带薪休假\t\t0--退出  " << endl;
				int a;
				cin >> a;
				switch (a)
				{
				case 1:
					judge_ill_vacation(xiabiao); this->save(); break;//传入函数当做下标
				case 2:
					judge_salary_vacation(xiabiao); this->save(); break;//传入函数当做下标
				case 0:
					this->save();
					return;
				}
			}
		}
	}
	cout << "未查询到此人" << endl;
	system("pause");
	
}

void person_mana::judge_ill_vacation(int xiabiao)//在请假函数中传入的数组下标
{
	if (p[xiabiao].ill_nowork <= 16)
	{
		cout << "你的病假时间有" << 16 - p[xiabiao].ill_nowork << "小时" << endl;
		cout << "你这次想请假多少小时？" << endl;
		int a; cin >> a;
		if (a <= (16 - p[xiabiao].ill_nowork))
		{
			p[xiabiao].ill_nowork += a;
			cout << "你本次请假已批准，请合理安排假期时间！" << endl;
			system("pause");
			return;
		}
		else
		{
			cout << "你的请假时间不足！" << endl;
			cout << "如果急需请假，请当面向经理申请！" << endl;
			system("pause");
			return;
		}

	}
	else if (p[xiabiao].ill_nowork > 16)
	{
		cout << "你的病假时间已经使用了" << p[xiabiao].ill_nowork << "小时" << endl;
		cout << "如果急需请假，请当面向经理申请！" << endl;
		system("pause");
		return;
	}

}

//判断带薪休假类
void person_mana::judge_salary_vacation(int xiabiao)
{
	if (p[xiabiao].salary_nowork <= 24)
	{
		cout << "你的带薪休假时间有" << 24 - p[xiabiao].salary_nowork << "小时" << endl;
		cout << "你这次想请假多少小时？" << endl;
		int a; cin >> a;
		if (a <= (24 - p[xiabiao].salary_nowork))
		{
			p[xiabiao].salary_nowork += a;
			cout << "你本次请假已批准，请合理安排假期时间！" << endl;
			system("pause");
			return;
		}
		else
		{
			cout << "你的请假时间不足！" << endl;
			cout << "如果急需请假，请当面向经理申请！" << endl;
			system("pause");
			return;
		}
	}
	else if (p[xiabiao].salary_nowork > 24)
	{
		cout << "你的带薪休假时间已经使用了" << p[xiabiao].salary_nowork << "小时" << endl;
		cout << "如果急需请假，请当面向经理申请！" << endl;
		system("pause");
		return;
	}
}

//查找函数
void person_mana::search()
{
	system("cls");
	if (top == 0)
	{
		cout << "没有技术人员信息!" << endl;
		system("pause");
		system("cls");
		return;
	}
	int choice;
	do {
		cout << endl << endl;
		cout << "                                               ooooo查找ooooo" << endl;
		cout << "                       ||                                                        ||" << endl;
		cout << "                       ||       1 ： 按编号       2 :按姓名       0 :退出        ||" << endl;
		cout << "                       ||                                                        ||" << endl;
		cout << "                       oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "请输入您的选择:";
		cin >> choice;
		switch (choice)
		{
		case 1:search_num(); break;
		case 2:search_name(); break;
		case 0:cout << "您已安全退出." << endl; break;
		default:cout << "没有此选项,请重选." << endl; system("pause");  system("cls");  break;
		}
	} while (choice != 0);
	system("cls");
}

//按照编号查找
void person_mana::search_num()
{
	int y1;
	cout << "请输入要查询技术人员的编号：";
	cin >> y1;
	for (int i = 0; i < top; i++)
	{
		if (p[i].getnum() == y1)
		{
			cout << "oooooooooooo找到这个技术人员了，其信息为：oooooo" << endl;
			p[i].output();
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "该技术人员不存在!" << endl;
	system("pause");
	system("cls");
}


//按照姓名查找
void person_mana::search_name()
{
	string s1;
	cout << "请输入要查询的技术人员姓名：";
	cin >> s1;
	for (int i = 0; i < top; i++)
	{
		if (p[i].getname() == s1)
		{
			cout << "oooooooooooo找到这个技术人员了，其信息为：oooooo" << endl;
			p[i].output();
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "该技术人员不存在!" << endl;
	system("pause");
	system("cls");
}

//编辑函数
void person_mana::edit()
{
	if (top == 0)
	{
		cout << "没有技术人员信息!" << endl;
		system("pause");
		system("cls");
		return;
	}
	int choice;
	do {
		system("cls");
		cout << "                                       ooooo编辑ooooo" << endl;
		cout << "                    ||                                                        ||" << endl;
		cout << "                    ||        1 : 按编号       2 : 按姓名       0 :退出       ||" << endl;
		cout << "                    ||                                                        ||" << endl;
		cout << "                    oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "请输入您的选择:";
		cin >> choice;
		switch (choice)
		{
		case 1:edit_num(); this->save();  break;
		case 2:edit_name(); this->save(); break;
		case 0:cout << "您已安全退出." << endl; this->save(); break;
		default:cout << "没有此选项,请重选." << endl; system("pause");  system("cls");  break;
		}
	} while (choice != 0);
	system("cls");
}


//查找编号编辑
void person_mana::edit_num()
{
	int x1;
	cout << "请输入要编辑的技术人员的编号：";
	cin >> x1;
	for (int i = 0; i <= top; i++)
	{
		if (p[i].getnum() == x1)
		{
			p[i].output();
			cout << endl;
			cout << "请重新输入技术人员信息："<<endl;
			p[i].input();
			cout << "修改成功!" << endl;
			p[i].output();
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "该员工不存在!" << endl;
	system("pause");
}


//查找姓名编辑
void person_mana::edit_name()
{
	string h1;
	cout << "请输入要编辑的技术人员的姓名:";
	cin >> h1;
	for (int i = 0; i < top; i++)
	{
		if (p[i].getname() == h1)
		{
			p[i].output();
			cout << endl;
			cout << "请重新输入技术人员信息：";
			p[i].input();
			cout << "修改成功!" << endl;
			p[i].output();
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "该员工不存在!" << endl;
	system("pause");
}

//删除类
void person_mana::Delete()
{
	system("cls");
	if (top == 0) { cout << "没有技术人员信息!" << endl; system("pause"); system("cls"); return; }
	int choice;
	do {
		cout << "                                       ooooo删除ooooo" << endl;
		cout << "                    ||                                                        ||" << endl;
		cout << "                    ||       1 : 按编号        2 : 按姓名       0 :退出       ||" << endl;
		cout << "                    ||                                                        ||" << endl;
		cout << "                    oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "请输入您的选择:";
		cin >> choice;
		switch (choice)
		{
		case 1:Delete_num(); this->save(); break;
		case 2:Delete_name(); this->save(); break;
		case 0:cout << "您已安全退出." << endl; this->save(); break;
		default:cout << "没有此选项,请重选." << endl; system("pause");  system("cls");  break;
		}
	} while (choice != 0);
	system("cls");
}

//查找编号删除
void person_mana::Delete_num()
{

	int f1;
	cout << "请输入要删除的技术人员编号:";
	cin >> f1;
	int remain = 0;
	for (int i = 0; i < top; i++)
	{
		if (p[i].getnum() == f1)
		{
			remain = i;
			p[i].output();
			break;
		}

	}
	
	char c1;
	cout << "是否删除此项（是:y/Y,否：n/N）:";
	cin >> c1;
	if (c1 == 'y' || c1 == 'Y')
	{
		for (int k = remain; k < top; k++)
		{
			p[k] = p[k + 1];
		}
		cout << "删除成功!" << endl;
		top--;
		system("pause");
		system("cls");
		return;
	}
	else
		cout << "没有删除该技术人员!" << endl; system("pause"); system("cls");
}

//查找姓名删除
void person_mana::Delete_name()
{

	string r;
	cout << "请输入要删除的人员姓名:";
	cin >> r;
	int remain = 0;
	for (int i = 0; i < top; i++)
	{
		
		if (p[i].getname() == r)
		{
			remain = i;
			p[i].output();
			break;
		}
		
	}

	char c3;
	cout << "是否删除此项（是:y/Y,否：n/N）:";
	cin >> c3;
	if (c3 == 'y' || c3 == 'Y')
	{

		for (int k = remain; k < top - 1; k++)
		{
			p[k] = p[k + 1];
		}
		cout << "删除成功!" << endl;
		top--;
		system("pause");
		system("cls");
		return;
	}
	else
		cout << "没有删除该技术人员!" << endl; system("pause"); system("cls");
}

//统计人员总数
void person_mana::total()
{
	cout << "员工总人数为：" << top << " 人" << endl;
	//统计各个部门人数的思路：通过遍历数组，逐个判断部门归属，定义几个变量，通过增加的方式获得人数信息
		//初始化销售部，外勤部，后勤部的人数
	int sale = 0, out = 0, behind = 0;
	int d_manager = 0, tech = 0, sale_people = 0, sale_manager = 0;
	for (int i = 0; i < top; i++)
	{
		if (p[i].department == 1)
			sale++;
		else if (p[i].department == 2)
			out++;
		else if (p[i].department == 3)
			behind++;
	}
	for (int i = 0; i < top; i++)
	{
		if (p[i].position == 1)
			d_manager++;
		else if (p[i].position == 2)
			tech++;
		else if (p[i].position == 3)
			sale_people++;
		else if (p[i].position == 4)
			sale_manager++;
	}
	cout << "你想要统计什么信息？" << endl;
	cout << "1：各部门人数\t2：各职位人数" << endl;
	int a = 0; cin >> a;
	if (a == 1)
	{
		cout << "销售部：" << sale << "人" << endl;
		cout << "外勤部：" << out << "人" << endl;
		cout << "后勤部：" << behind << "人" << endl;
	}
	else if (a == 2)
	{
		cout << "部门经理：" << d_manager << "人" << endl;
		cout << "技术人员：" << tech << "人" << endl;
		cout << "销售人员：" << sale_people << "人" << endl;
		cout << "销售经理：" << sale_manager << "人" << endl;
	}
	system("pause");
	system("cls");
}


//保存文件，已完成
void person_mana::save()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);

	for (int i = 0; i < top; i++)
	{
		//注意保存的格式，开头顶格，每个参数之间用空格隔开
		ofs << p[i].num
			<< " " << p[i].name
			<< " " << p[i].sex
			<< " " << p[i].department
			<< " " << p[i].position
			<< " " << p[i].level
			<< " " << p[i].ill_nowork
			<< " " << p[i].salary_nowork << endl;
	}
	cout << "现有员工人数：" << top << endl;
	cout << "保存成功!" << endl;
	cout << endl;
	ofs.close();
	system("pause");
	system("cls");

}

//统计文件中已有的人数
int  person_mana::get_EmpNum()
{
	ifstream in("test.txt");
	string line;

	int e_num = 0;
	string e_name = "";
	int e_sex = 0;
	int e_department = 0;
	int e_position = 0;
	int e_level = 0;
	int e_ill_nowork = 0;//病假时间
	int e_salary_nowork = 0;//带薪休假时间

	int num = 0;
	//暂存员工人数

	while (getline(in, line))
	{
		istringstream str(line);
		string out;
		while (str >> e_num >> e_name >> e_sex >> e_department >> e_position >> e_level>> e_ill_nowork>> e_salary_nowork)
		{
			num++;//统计文件中的人数
		}
	}

	//参考资料
	//https://www.freesion.com/article/73031479220/
	in.close();
	return num;
}

void person_mana::t_Emp()//初始化员工
{
	ifstream in("test.txt");
	string line;

	int e_num = 0;
	string e_name = "";
	int e_sex = 0;
	int e_department = 0;
	int e_position = 0;
	int e_level = 0;
	int e_ill_nowork = 0;//病假时间
	int e_salary_nowork = 0;//带薪休假时间
	while (getline(in, line))
	{
		istringstream str(line);
		string out;
		while (str >> e_num >> e_name >> e_sex >> e_department >> e_position >> e_level >> e_ill_nowork >> e_salary_nowork)
		{
			p[top].num = e_num;
			p[top].name = e_name;
			p[top].sex = e_sex;
			p[top].department = e_department;
			p[top].position = e_position;
			p[top].level = e_level;
			p[top].ill_nowork = e_ill_nowork;
			p[top].salary_nowork = e_salary_nowork;

			top++;//总数加一
		}
	}
	//关闭文件 
	in.close();
}

//读取文件
void person_mana::read()
{
	cout << "读取成功！" << endl;
	cout << "现有员工数量：" << top << endl;
	system("pause");
	system("cls");
}

//意见箱函数
string suggestion()
{
	cout << "你想说什么就写什么，不用担心，意见箱是完全匿名的！" << endl;
	string sug;
	cin >> sug;
	return sug;
}

//意见箱保存文件
void suggestion_box()
{
	ofstream ofs;
	ofs.open("suggestion.txt", ios::app);

	ofs << endl << "~~~" << suggestion() << endl;

	cout << "保存成功！" << endl;

	ofs.close();
	system("pause");
	system("cls");

}

void TechnologistMenu(person_mana tee)
{
	system("cls");
	int choice;
	do
	{
		cout << "                                   *****公司系统*****" << endl;
		cout << endl << "                          || 1：查看个人信息     2：请假       ||" << endl;
		cout << "                          ||                                   || " << endl;
		cout << "                          || 3：管理员登录       0：返回       ||" << endl;
		cout << "输入您操作的选项：";

		//输入的选项

		cin >> choice;

		//员工编号
		int e_num = 0;
		if (choice == 1 || choice == 2)
		{
			cout << "请输入你的编号：" << endl;
			cin >> e_num;
		}

		switch (choice)
		{
		case 1:
			tee.e_check(e_num); system("cls"); break;
		case 2:
			tee.record_vacation_day(e_num); system("cls"); break;


		case 3:
			system("cls");
			int a;
			do {
				cout << "                        **************************************************************************" << endl;
				cout << "                        **************************************************************************" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        ********                         管理员操作                       ********" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        ********    1:添加    2:查找    3:修改    4:统计    5:删除        ********" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        ********    6:显示    7:保存    8:读取    0:返回                  ********" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        ********                                                          ********" << endl;
				cout << "                        **************************************************************************" << endl;
				cout << "                        **************************************************************************" << endl;

				cout << "输入您操作的选项：";
				cin >> a;
				switch (a)
				{
				case 1:tee.add(); break;
				case 2:tee.search(); break;
				case 3:tee.edit(); break;
				case 4:tee.total(); break;
				case 5:tee.Delete(); break;
				case 6:tee.show(); break;
				case 7:tee.save(); break;
				case 8:tee.read(); break;
				case 0:tee.save(); cout << "退出成功!" << endl; system("pause");system("cls"); break;
				default:cout << "无此选项,请重试!" << endl; break;
				};
			} while (a != 0);
		}


	} while (choice != 0);
}

int main()
{

	cout << "                                           ooo 欢迎进入公司管理系统ooo" << endl;
	int choice;

	person_mana tee;
	do {

		cout << "                                               oooooo主菜单oooooo          " << endl;
		cout << "                         ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "                         ||                                                             || " << endl;
		cout << "                         ||     1：登陆          2：意见箱          0:退出系统          || " << endl;
		cout << "                         ||                                                             || " << endl;
		cout << "                         ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << "请输入您的选择:";
		cin >> choice;

		switch (choice)
		{
		case 1:TechnologistMenu(tee); system("cls"); break;
		case 2:suggestion_box(); break;
		case 0:cout << "您已安全退出系统." << endl; break;
		default:cout << "没有此选项，请重选;" << endl; break;
		}
	} while (choice != 0);

	cout << "                                           ooooo欢迎您使用本系统!ooooo" << endl;
	return 0;
}