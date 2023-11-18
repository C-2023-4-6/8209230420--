#include<iostream>
using namespace std;

int main()
{
	float x, y;
	a:cout << "请输入x[x属于(0,10)]的值：";
	cin >> x;
	//判断x值属于的区间，进行相应的运算
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
		cout << "y=" << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
		cout << "y=" << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "y=" << y << endl;
	}
	else if (x <= 0 || x >= 10)
	{
		cout << "输入的x值不在定义域内" << endl;
	}
	goto a;//想要一次性试完三个数，但是不建议使用
	system("pause");
	return 0;
}