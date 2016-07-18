#include<iostream>
using namespace std;

int main()
{
	int m, n, result = 0;
	cin >> m >> n;
	while (m <= n)
	{
		if (m % 2 == 1)
		{
			result += m;
		}
		m++;
	}

	cout << result << endl;
	return 0;
}
/*
更快的方法
连续奇数项和=（首+尾）*项数/2 
项数=（尾-首）/公差 +1
*/