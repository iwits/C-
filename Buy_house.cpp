#include<iostream>
using namespace std;

int main()
{
	int N, K, year;
	double money = 200.0;
	while (cin >> N >> K)
	{
		year = 0;
		money = 200.0;
		if (N > 200)
		{
			year = 1;
		}
		else
		{
			for ( year = 2;year<=20; year++)
			{
				money = money + money*K / 100;
		
				if (N * year > money)
				{
					break;
				}
			}
		}

		if (year <= 20 &&year)
		{
			cout << year << endl;
		}
		else
		{
			cout << "Impossible" << endl;
			//cout << year << endl;
		}
	}
	return 0;
}