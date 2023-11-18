#include<iostream>
using namespace std;
int main()
{
	int k;//未定义变量k
	int i = k + 1;
	cout << i++ << endl;
	i = 1;//重定义了i的值，删去int
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}