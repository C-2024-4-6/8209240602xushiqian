#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "请输入半径:" << endl;
	cin >> a;
	cout << "请输入锥高:" << endl;
	cin >> b;
	const float p = 3.14;
	double v =  b * p * a * a/3;
		cout << "圆锥体积为：" << v;

}
