#include<iostream>
using namespace std;
int main()
{
	//���ֹ��ɵ�n����n���Ǻţ���������ѭ��
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)//�˴�j<=i
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}