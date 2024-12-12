#include<iostream>
using namespace std;
int min(int a, int b)
{
	int t;
	for (t = 1; ; t++)
	{
		if (t % a == 0 && t % b == 0)
			break;
	}return t;
}
int max(int a, int b)
	{
	int t;
for (t = a;; t--)
{
	if (a % t == 0 && b % t == 0)
		break;
}return t;
	}
int main()
{
	int x, y;
	cout << "请输入两个自然数" << endl;
	cin >> x >> y;
	cout << "最小公倍数为：" << min(x, y) << endl;
	cout<<"最大公约数为：" << max(x, y) << endl;
}