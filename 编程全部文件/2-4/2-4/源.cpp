#include<iostream>
using namespace std;

int main()
{
	char c;
	int a, b;
	float d;
	cout << "请输入你要进行的运算：";
	cin >> c;
	cout << "请输入你要运算的两个数：";
	cin >> a >> b;
	//选用switch语句进行精准的判断运算符
	switch (c)
	{
	case '+':
		d = a + b;
		cout << d << endl;
		break;
	case'-':
		d = a - b;
		cout << d << endl;
		break;
	case '*':
		d = a * b;
		cout << d << endl;
		break;
	case '/':
		//选用if语句判断除数为0的情况
		if (b == 0)
		{
			cout << "除数不能为0" << endl;
		}
		
		else
		{
				d = a / b;
				cout << d << endl;
				break;
		}
	case '%':
		d = a % b;
		cout << d << endl;
	default:
		//除此以外全为非法运算符
		cout << "运算符错误" << endl;
	}
	system("pause");
	return 0;
}