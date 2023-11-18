#include<iostream>
#include<iomanip>
using namespace std;
/*
float abs(float num)
{
	if (num >= 0)
	{
		cout << num << endl;
	}
	else
	{
		cout << -num << endl;
	}
}发现系统自带这个函数
*/

int main()
{
	/*
	double m, n;
	m = 2.35843794938597587838958938389534872382173871285;
	n = 1e-100;
	cout << fixed << setprecision(120) << m << endl;
	cout << fixed << setprecision(120) << n << endl;
	测试double的精度
	*/
	double a, x, t;
	cout << "请输入一个正整数，我们将为你求解他的平方根的近似值：";
	cin >> a;
	x = a;
	//判断是否为负数
	if(a < 0)
	{
		cout << "你输入的数字不是正整数" << endl;
	}
	else if(a>=0)
	{
		//for循环进行迭代法
		for (int i = 0;; i++)
		{
			t = x;//借用一个t保存xn
			x = (x + a / x) / 2;//求xn+1
			if (abs(x - t) < 1e-10)//求绝对值函数
			{
				break;
			}
		}
		cout << "该数的平方根近似为：" << setprecision(20)<< x << endl;//系统默认小数位为6，添加使其更精确
	}
	//1、见程序
	//2、可以更小但是有限度，因为float,double都有一定的精度
	system("pause");
	return 0;
}