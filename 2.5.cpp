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
	cout << "有" << a << "个字母" << endl;
	cout << "有" << b << "个数字" << endl;
	cout << "有" << c << "个空格" << endl;
	cout << "有" << d << "个其他字符" << endl;

}