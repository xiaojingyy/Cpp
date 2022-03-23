#include<iostream>
#include<iomanip>
#include<string>
using namespace std;



class cube
{
public:
	cube();
	cube(int, int, int);
	int volume();	
private:
	int height;
	int width;
	int length;
};

//构造函数的函数名前不用加返回类型
cube::cube()
{
	cout << "请依次输入长宽高" << endl;
	cin >> length >> width >> height;
}


//下面两种调用方式结果是一样的，第一种调用更简洁

cube::cube(int l,int h,int w):length(l),height(h),width(w)
{
	cout << "下面是一个已经初始化了的对象调用的构造函数" << endl;
}

//cube::cube(int a ,int b ,int c)
//{
//	cout << "下面是一个已经初始化了的对象调用的构造函数" << endl;
//	height = a;
//	this->width = b;//这是本质，使用指针调用
//	length = c;
//}

//返回值类型一定要和在类中定义的返回值类型一样
int cube::volume()
{
	return (height * this->length * this->width);
}


void test()
{
	cube c1;//调用第一个构造函数
	cout << "该长方体的体积为" << c1.volume() << endl;
	cube c2(10, 10, 10);//调用第二个构造函数
	cout << "该长方体的体积为" << c2.volume() << endl;

	cube c[3] =//建立一个对象数组,每次建立一个对象数组都会调用一次构造函数
	{
		cube(10,10,10),
		cube(15,15,15),
		cube(10,20,30)
	};//注意定义对象数组这个地方需要加分号

	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i << "个的面积是：" << c[i].volume();
	}
}

int main()
{
	test();
}