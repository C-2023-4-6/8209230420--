#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	//利用循环一个一个试
	for (int i = min(a,b);i>=1; i--)//取最小开始逐减
	{
		if (a % i == 0 && b % i == 0)//最大公约数的性质
		{
			cout << "两数的最大公约数为：" << i << endl;
			break;
		}
	}
	for (int i = max(a, b);; i++)//取最大开始逐加
	{
		if (i % a == 0 && i % b == 0)//最小公倍数的性质
		{
			cout << "两数的最大公倍数为：" << i << endl;
			break;
		}
	}
	system("pause");
	return 0;
}