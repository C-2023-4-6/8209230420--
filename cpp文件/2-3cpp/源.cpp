#include<iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "�����������ε����ߣ�";
	cin >> a >> b >> c;
	//�����ж�Ƕ��
	if (a,b,c>0 && a + b > c && a + c > b && b + c > a)//�涨�ܹ�����������
	{
		if (a == b || b == c || a == c)//�ж��Ƿ�Ϊ����������
		{
			cout << "�������ǵ��������Σ����ܳ�Ϊ��" << a + b + c << endl;
		}
		else
		{
			cout << "�����β��ǵ��������Σ����ܳ�Ϊ��" << a + b + c << endl;
		}
	}
	else
	{
		cout << "�޷����������Σ�" << endl;
	}
	system("pause");
	return 0;
}