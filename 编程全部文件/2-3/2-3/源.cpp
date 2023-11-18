#include<iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "请输入三角形的三边：";
	cin >> a >> b >> c;
	//两个判断嵌套
	if (a,b,c>0 && a + b > c && a + c > b && b + c > a)//规定能够构成三角形
	{
		if (a == b || b == c || a == c)//判断是否为等腰三角形
		{
			cout << "三角形是等腰三角形，且周长为：" << a + b + c << endl;
		}
		else
		{
			cout << "三角形不是等腰三角形，且周长为：" << a + b + c << endl;
		}
	}
	else
	{
		cout << "无法构成三角形！" << endl;
	}
	system("pause");
	return 0;
}