#include <iostream>
using namespace std;
int main()
{
	int a, b;
	float c, d, e;
	for (a = 0, b = 2, c = 0.8, e = 0; b <= 100; b = 2 * b)
	{
		a++;
		d = b * c;
		e = d + e;
	}
	cout << e / a << endl << e <<endl<<a;





}

