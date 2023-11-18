#include<iostream>
using namespace std;

int main()
{
	//利用sizeof函数查看每个基本数据类型的长度
	//1、字符型
	cout << "char length:" << sizeof(char) << endl;
	//2、整型
	cout << "int length:" << sizeof(int) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "short length:" << sizeof(short) << endl;
	//3、bool类型
	cout << "bool length:" << sizeof(bool) << endl;
	//4、浮点型
	cout << "float length:" << sizeof(float) << endl;
	cout << "double length:" << sizeof(double) << endl;
	//5、字符串型
	cout << "string length:" << sizeof(string) << endl;
	system("pause");
	return 0;
}