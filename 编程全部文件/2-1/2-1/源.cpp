#include<iostream>
using namespace std;

int main()
{
	char word1, word2;
	cout<< "������һ����ĸ��";
	cin >> word1;
	//�ж��Ƿ�ΪСд
	//����ת��Ϊ��д
	if (word1 >= 97)
	{
		word2 = word1 - 32;//˼·�����ô�Сд��ĸ��ASCIIֵ����ص������������ת��
		cout << "���д��ĸΪ��" << word2 << endl;
	}
	//������������ַ���ASCII��ֵ
	else
	{
		cout<<"����һ����ĸ��ASCIIֵΪ��"<<(int)(word1+1)<<endl;
	}
	system("pause");
	return 0;
}