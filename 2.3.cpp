#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "请依次输入三角形三边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		d = a + b + c;
		cout << "周长为：" << d << endl;
		if (a == b || a == c || b == c)
			cout << "该三角形是等腰三角形";
		else cout << "该三角形不是等腰三角形";
	}
	else cout << "不是三角形的三边";

}