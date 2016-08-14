#include<iostream>
using namespace std;

int main()
{
	int n, a[6] = { 0 };
	cin >> n;
	while (n)
	{
		if (n >= 100)
		{
			a[0] = n / 100;
			n = n - a[0] * 100;
		}
		else if(n>=50)
		{
			a[1]++;
			n = n - 50;
		}
		else if (n >= 20)
		{
			a[2]++;
			n = n - 20;
		}
		else if (n >= 10)
		{
			a[3]++;
			n = n - 10;
		}
		else if (n >= 5)
		{
			a[4]++;
			n = n - 5;
		}
		else if (n >= 1)
		{
			a[5] = n;
			n = n - a[5];
		}
	}
	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}