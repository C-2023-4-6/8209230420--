#include<iostream>
using namespace std;

int main()
{
	float x, y;
	a:cout << "������x[x����(0,10)]��ֵ��";
	cin >> x;
	//�ж�xֵ���ڵ����䣬������Ӧ������
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
		cout << "�����xֵ���ڶ�������" << endl;
	}
	goto a;//��Ҫһ�������������������ǲ�����ʹ��
	system("pause");
	return 0;
}