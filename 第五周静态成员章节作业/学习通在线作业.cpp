#include<iomanip>
#include<string>
#include <iostream>
using namespace std;

/*
商店销售某一商品，商店每天公布统一的折扣（discount）。同时允许销售人员在销售时灵活掌握售价（price），在此基础上，对一次购10件以上者，还可以享受98折优惠。现已知当天3个销售员销售情况为:

销售员号（num）      销货件数（quantity）      销货单价（price）

101                    5                     23.5

102                   12                     24.5

103                  100                     21.5

请编程序，计算出当日此商品的总销售款sum以及每件商品的平均售价。要求用静态数据成员和静态成员函数。

提示：将折扣discount，总销售款sum和商品销售总件数n，声明为静态数据成员，再定义静态成员函数average(求平均售价)和display(输出结果)。
*/



//在类外定义静态成员函数时一定要记得写类名加作用域
//使用静态成员变量时也要加

class store
{
public:
	//自定义一个静态成员average函数求出平均售价。
	//需要判断件数是否大于10，因为销货单价还没享受98折

	store(int quantity, double price);//传入销售件数和销售单价,累计销售额和销售总数
	static double average(double sum, int n);


	//定义一个静态成员函数display输出结果
	static void display(double sum, int n);//传入销售总额和总数


	static double discount;//折扣
	static double sum;//销售总价
	static int n;//销售总件数
};
//静态成员函数记得在类外初始化
double store::discount = 0.98;
double store::sum = 0;
int	   store::n = 0;

store::store(int quantity, double price)
{
	n += quantity;
	if (quantity > 10)
	{
		sum += (quantity * price * discount);
	}
	else
	{
		sum += (quantity * price);
	}
}

double store::average(double sum, int n)//计算平均值
{
	return(sum / n);
}

void store::display(double sum, int n)//打印结果 
{
	cout << "商品的总销售款是：" << sum << endl;
	cout << "商品的销售总件数是：" << n << endl;
	cout << "销售价格的平均值是：" << store::average(store::sum, store::n) << endl;
	//其实可以不用写average函数，直接display函数的第三行计算就可以，这样反而麻烦

}

void test()
{
	store _101(5, 23.5);
	store _102(12, 24.5);
	store _103(100, 21.5);
	store::display(store::sum, store::n);
}


int main()
{
	test();
	system("pause");
	return 0;
}
