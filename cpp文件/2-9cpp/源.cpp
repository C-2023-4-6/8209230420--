#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	float aver;
	for (int j = 2,i = 1; j <= 100; j = j * 2,i++)//j��ʾ������i��ʾ����
	{
		sum = sum + j;//sum��ʾ���ƻ�������ܺ�
		aver = (sum * 0.8) / i;
	}
	cout << "ÿ��ƽ��������Ǯ:" << aver << endl;
	system("pause");
	return 0;
}