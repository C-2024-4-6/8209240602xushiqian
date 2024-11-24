#include<iostream>
using namespace std;
int main()
{
	//Int i = k + 1;    k未赋值，未命名，i大写了
	//cout << i++ << endl;   i未赋值
	//int i = 1; i已经被命名
	//cout << i++ << endl; 正确
	//cout << "Welcome to C++" << endl; 正确
	//return 0;
	int k = 1;
		int i = k + 1;
		cout << i++ << endl;
	 i = 1;
		cout << i++ << endl;
		cout << "Welcome to C++" << endl;
		return 0;
	}