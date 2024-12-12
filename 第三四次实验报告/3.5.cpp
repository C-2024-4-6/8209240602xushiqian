#include<iostream>
using namespace std;
int aaa(int t) 
{
	int a;
	a = 2 * (t + 1);
	return a;
}
int main()
{
	int x = 1,y=1;
		for (; x <10; x++) 
		{
			y=aaa(y);
	}
		cout << "第一天摘了" << y << "个桃子";
}