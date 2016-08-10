#include<iostream>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	int result = 0;
	if (n>=y/x)
	{
		if (y%x == 0)
		{
			result = n - y / x;
		}
		else
		{
			result = n - y / x - 1;
		}
	}
	else
	{
		result = 0;
	}
	cout << result << endl;
	return 0;
}