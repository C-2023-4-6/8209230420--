#include<iostream>
using namespace std;

int main()
{
	char word1, word2;
	cout<< "请输入一个字母：";
	cin >> word1;
	//判断是否为小写
	//是则转化为大写
	if (word1 >= 97)
	{
		word2 = word1 - 32;//思路：利用大小写字母的ASCII值相差特点的数字来进行转化
		cout << "其大写字母为：" << word2 << endl;
	}
	//否则输出其后继字符的ASCII码值
	else
	{
		cout<<"其下一个字母的ASCII值为："<<(int)(word1+1)<<endl;
	}
	system("pause");
	return 0;
}