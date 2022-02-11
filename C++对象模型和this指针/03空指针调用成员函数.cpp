#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class person
{
public:
	void showname()
	{
		cout<<"this is person class"<<endl;
	}
	void showage()
	{
		cout<< "this is person age"<< endl;
	}


};

void test01()
{
	person* p = NULL;
	p->showage();
	p->showname();
}


int main()
{
	test01();

	system("pause");
	system("cls");
	return 0;
}