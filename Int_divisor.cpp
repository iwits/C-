#include<iostream>
using  namespace std;

int main()
{
	int n,digital_sum;
	cin >> n;
	for (int i = 10; i < n; i++)
	{
		digital_sum = i / 10 + i % 10;
		if (i%digital_sum == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}