#include<iostream>
using namespace std;
int main()
{
	//发现规律第n行有n个星号，故用两层循环
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)//此处j<=i
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}