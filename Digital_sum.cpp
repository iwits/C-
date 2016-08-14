#include<iostream>
using namespace std;

int main()
{
	int a, b[5] = { 0 }, sum = 0;
	cin >> a;
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i];
		if (b[i] < a)
		{
			sum = sum + b[i];
		}
	}
	cout << sum << endl;
	return 0;
}