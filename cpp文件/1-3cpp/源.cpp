#include<iostream>
using namespace std;

int main()
{
	//����sizeof�����鿴ÿ�������������͵ĳ���
	//1���ַ���
	cout << "char length:" << sizeof(char) << endl;
	//2������
	cout << "int length:" << sizeof(int) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "short length:" << sizeof(short) << endl;
	//3��bool����
	cout << "bool length:" << sizeof(bool) << endl;
	//4��������
	cout << "float length:" << sizeof(float) << endl;
	cout << "double length:" << sizeof(double) << endl;
	//5���ַ�����
	cout << "string length:" << sizeof(string) << endl;
	system("pause");
	return 0;
}