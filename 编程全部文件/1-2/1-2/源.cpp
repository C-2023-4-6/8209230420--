#include<iostream>
using namespace std;

int main()
{
	const float yzl = 3.1415926;//���峣������֪ʶ�����ޣ�ֻ��д�����
	float a, b, volume;
	cout << "��ֱ�����Բ׶�׵İ뾶��׶�ߣ�";
	cin >> a >> b;
	volume = (yzl * a * a * b) / 3;
	cout << "Բ׶�����Ϊ��" << volume << endl;
	system("pause");
	return 0;
}