#include<iostream>
using namespace std;
int main()
{
	char x;
	int a, b, c, d;
	a = 0, b = 0, c = 0, d = 0;
	while (cin.get(x))
	{
		if (x == '\n')
			break;
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
			a++;
		else if (x >= '0' && x <= '9')
			b++;
		else if (x == ' ')
			c++;
		else d++;

	}
	cout << "��" << a << "����ĸ" << endl;
	cout << "��" << b << "������" << endl;
	cout << "��" << c << "���ո�" << endl;
	cout << "��" << d << "�������ַ�" << endl;

}