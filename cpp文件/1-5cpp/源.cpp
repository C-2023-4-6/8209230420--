#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << "将华氏温度转化为摄氏温度" << endl;
	float c, f;
	cout << "请输入华氏温度为：";
	cin >> f;
	c = 5 / 9.0 * (f - 32);
	cout << "对应的摄氏温度为：" <<fixed<<setprecision(2)<< c << endl;//保留两位小数
	system("pause");
	return 0;
}