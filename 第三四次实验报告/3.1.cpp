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
	cout << "������������Ȼ��" << endl;
	cin >> x >> y;
	cout << "��С������Ϊ��" << min(x, y) << endl;
	cout<<"���Լ��Ϊ��" << max(x, y) << endl;
}