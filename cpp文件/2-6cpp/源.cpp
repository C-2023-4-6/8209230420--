#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "������������������";
	cin >> a >> b;
	//����ѭ��һ��һ����
	for (int i = min(a,b);i>=1; i--)//ȡ��С��ʼ���
	{
		if (a % i == 0 && b % i == 0)//���Լ��������
		{
			cout << "���������Լ��Ϊ��" << i << endl;
			break;
		}
	}
	for (int i = max(a, b);; i++)//ȡ���ʼ���
	{
		if (i % a == 0 && i % b == 0)//��С������������
		{
			cout << "��������󹫱���Ϊ��" << i << endl;
			break;
		}
	}
	system("pause");
	return 0;
}