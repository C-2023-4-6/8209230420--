#include<iostream>
#include<string>
using namespace std;
char str[102];
int main()
{
	int eng=0, num=0, space=0, it = 0;
	memset(str, 0, 100);
	cin.get(str, 100);//通过str数组获取字符
	//再通过每个对应的ASCII值来计数
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
	cout << "其中字母有" << eng << "个" << endl << "其中数字有" << num << "个" << endl << "其中空格有" << space << "个" << endl << "其他有" << it << "个" << endl;
	system("pause");
	return 0;
}