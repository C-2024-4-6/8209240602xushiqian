#include<iostream>
using namespace std;
int main()
{
	char c;
	cout << "�����룺";
	cin >> c;
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		cout << c;
	}
	else cout << (int)(c + 1);
}