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
}����ϵͳ�Դ��������
*/

int main()
{
	/*
	double m, n;
	m = 2.35843794938597587838958938389534872382173871285;
	n = 1e-100;
	cout << fixed << setprecision(120) << m << endl;
	cout << fixed << setprecision(120) << n << endl;
	����double�ľ���
	*/
	double a, x, t;
	cout << "������һ�������������ǽ�Ϊ���������ƽ�����Ľ���ֵ��";
	cin >> a;
	x = a;
	//�ж��Ƿ�Ϊ����
	if(a < 0)
	{
		cout << "����������ֲ���������" << endl;
	}
	else if(a>=0)
	{
		//forѭ�����е�����
		for (int i = 0;; i++)
		{
			t = x;//����һ��t����xn
			x = (x + a / x) / 2;//��xn+1
			if (abs(x - t) < 1e-10)//�����ֵ����
			{
				break;
			}
		}
		cout << "������ƽ��������Ϊ��" << setprecision(20)<< x << endl;//ϵͳĬ��С��λΪ6�����ʹ�����ȷ
	}
	//1��������
	//2�����Ը�С�������޶ȣ���Ϊfloat,double����һ���ľ���
	system("pause");
	return 0;
}