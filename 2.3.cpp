#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "��������������������" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		d = a + b + c;
		cout << "�ܳ�Ϊ��" << d << endl;
		if (a == b || a == c || b == c)
			cout << "���������ǵ���������";
		else cout << "�������β��ǵ���������";
	}
	else cout << "���������ε�����";

}