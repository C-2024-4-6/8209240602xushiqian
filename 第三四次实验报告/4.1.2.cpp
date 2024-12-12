#include<iostream>
using namespace std;
int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int t, x, y;
	for (x = 0; x < 10; x++) 
	{
		for (y = x+1; y < 10; y++) 
		{
			if (a[x] > a[y])
			{
				t = a[x];
				a[x] = a[y];
				a[y] = t;

		    }

		}
	}
	for (x = 0; x < 10; x++)
		cout << a[x] << endl;
}

