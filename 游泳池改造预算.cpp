#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//一个圆形泳池，现在要在周围建一个宽为3米的过道，四周要围上栅栏，单价为35元每米，过道造价为20元每平方米，由用户输入泳池的半径
const float PI = 3.141593;//float后面六位小数
const float fence_price = 35;
const float guodao_price = 20;
class swim_circle
{
public:
	swim_circle(float radius);//先声明
	float length();//计算周长
	float size();//计算面积
private:
	float radius;
};

swim_circle::swim_circle(float r)
{
	radius = r;
}

float swim_circle::length()
{
	return (2 * PI * this->radius* fence_price);
}

float swim_circle::size()
{
	return (PI * radius * radius* guodao_price);

}
void test01()
{
	float radius;
	cout << "请输入该泳池的半径：";
	cin >> radius;

	swim_circle s1(radius);//泳池边界
	swim_circle s2(radius+3);//圆环边界

	cout << "栅栏的造价是：" << s2.length()<<endl;

	cout << "过道的造价是" << s2.size() - s1.size();
}

int main()
{
	test01();


	system("pause");
	return  0;
}