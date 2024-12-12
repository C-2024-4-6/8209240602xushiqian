#include<iostream>
using namespace std;
bool is_prime(int num);
int main()
{
	int x, z;
	for (x = 1, z = 0; z < 200; x++)
	{
		if (is_prime(x) == 1) {
			z++;
			cout << x << " ";
			if (z % 10 == 0)
			cout << endl;
		}
		
	}
}
bool is_prime(int num) 
{
	int a=0;
	for (int t = 1; t <= num; t++) {
		if (num % t == 0)
			a++;
	}
	if (a == 2)
		return true;
	else return false;
}