#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "�����뻪���¶ȣ�";
	cin >> a;
	b = (a - 32) * 5 / 9;
	cout << "�����¶�Ϊ��" <<fixed<< setprecision(2)<<b;
}