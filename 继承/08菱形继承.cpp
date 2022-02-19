#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//动物类
class animal
{
public:
	int m_age;
};

//继承前加virtual关键字后，变为虚继承
//此时的公共父类的animal成为虚基类

//羊类
class sheep :virtual public animal {};
//驼类
class tuo:virtual public animal{};
//羊驼类
class sheeptuo:public sheep,public tuo{};

void test01()
{
	sheeptuo st;
	st.sheep::m_age = 100;
	st.tuo::m_age = 100;
	//加上virtual关键字后，变为虚继承，m_age只有一个，所以sheep::m_age和tuo::m_age是同一个变量

	cout << "st.sheep::m_age" << st.sheep::m_age << endl;
	cout << "st.tuo::m_age" << st.tuo::m_age << endl;

}


int main()
{


	system("pause");
	return 0;
}