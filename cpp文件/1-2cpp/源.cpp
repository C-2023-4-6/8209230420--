#include<iostream>
using namespace std;

int main()
{
	const float yzl = 3.1415926;//定义常变量（知识量有限，只能写到这里）
	float a, b, volume;
	cout << "请分别输入圆锥底的半径，锥高：";
	cin >> a >> b;
	volume = (yzl * a * a * b) / 3;
	cout << "圆锥的体积为：" << volume << endl;
	system("pause");
	return 0;
}