#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "��������������;" << endl;
	cin >> a >> b;
	int i = a;
	for (; a % i != 0 || b % i != 0; i--)
	{
	}
	cout << "���ǵ���������ǣ�" << i << endl;
	int j = i * (a / i) * (b / i);
	cout << "���ǵ���С�������ǣ�" << j << endl;
	return 0;
}