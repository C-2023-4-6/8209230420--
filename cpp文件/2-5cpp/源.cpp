#include<iostream>
#include<string>
using namespace std;
char str[102];
int main()
{
	int eng=0, num=0, space=0, it = 0;
	memset(str, 0, 100);
	cin.get(str, 100);//ͨ��str�����ȡ�ַ�
	//��ͨ��ÿ����Ӧ��ASCIIֵ������
	for (int i = 0; i < 100; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num++;
		}
		else if (str[i] == str[101])
		{
			break;
		}
		else if (str[i] == ' ')
		{
			space++;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			eng++;
		}
		else
		{
			it++;
		}
	}
	cout << str;
	cout << "������ĸ��" << eng << "��" << endl << "����������" << num << "��" << endl << "���пո���" << space << "��" << endl << "������" << it << "��" << endl;
	system("pause");
	return 0;
}