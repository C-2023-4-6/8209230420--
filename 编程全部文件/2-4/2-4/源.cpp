#include<iostream>
using namespace std;

int main()
{
	char c;
	int a, b;
	float d;
	cout << "��������Ҫ���е����㣺";
	cin >> c;
	cout << "��������Ҫ�������������";
	cin >> a >> b;
	//ѡ��switch�����о�׼���ж������
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
		//ѡ��if����жϳ���Ϊ0�����
		if (b == 0)
		{
			cout << "��������Ϊ0" << endl;
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
		//��������ȫΪ�Ƿ������
		cout << "���������" << endl;
	}
	system("pause");
	return 0;
}