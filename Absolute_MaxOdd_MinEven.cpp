#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a[6];
	int MaxOdd = 0, MinEven = 101;
	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
		if (a[i] % 2 != 0 && a[i] > MaxOdd)
		{
			MaxOdd = a[i];
		}
		else if (a[i] % 2 == 0 && a[i] < MinEven)
		{
			MinEven = a[i];
		}
	}
	int result = 0;
	result = abs(MaxOdd - MinEven);
	cout << result << endl;
	return 0;
}