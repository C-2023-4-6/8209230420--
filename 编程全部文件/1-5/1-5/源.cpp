#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << "�������¶�ת��Ϊ�����¶�" << endl;
	float c, f;
	cout << "�����뻪���¶�Ϊ��";
	cin >> f;
	c = 5 / 9.0 * (f - 32);
	cout << "��Ӧ�������¶�Ϊ��" <<fixed<<setprecision(2)<< c << endl;//������λС��
	system("pause");
	return 0;
}