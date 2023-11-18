#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	float aver;
	for (int j = 2,i = 1; j <= 100; j = j * 2,i++)//j表示个数，i表示天数
	{
		sum = sum + j;//sum表示买的苹果个数总和
		aver = (sum * 0.8) / i;
	}
	cout << "每天平均花多少钱:" << aver << endl;
	system("pause");
	return 0;
}