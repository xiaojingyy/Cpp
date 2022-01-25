//#include<iostream>
//using namespace std;
//
////如果我们自己传入数据，就用自己的数据，如果没有就用默认值
////语法：返回值类型  函数名（形参=默认值）{}
////注意：一旦某个参数给定了默认值，那么他后面的参数也要给定默认值
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
////2:如果函数的声明有默认参数，那么函数的定义就不能有默认参数
//int func2(int a = 10, int b = 20);
//int func2(int a, int b)//这里不能再给默认参数了，一样的也不行,会报错“重定义”
//{
//	return a + b;
//}
//
//int main()
//{
//	cout<<func(10)<<endl;
//	cout << func2();
//
//	system("pause");
//	return 0;
//}
