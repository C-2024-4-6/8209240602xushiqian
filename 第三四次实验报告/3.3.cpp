#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include"mytemperature.h"
using namespace std;
int main() {
	double a, b;
	cout << "�����������¶ȣ�";
	cin >> a;
	printf("�����¶�Ϊ%.1f\n", celsius_to_fah(a));
	cout << "�����뻪���¶ȣ�";
	cin >> b;
	printf("�����¶�Ϊ%.2f\n", fahrenheit_to_cels(b));
	return 0;
}