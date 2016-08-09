#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a = 0, b = 0, c = 0, ca = 0, cb = 0, cc = 0;
	for (int i = 0; i < 3; i++)
	{
		int n, m;
		cin >> n >> m;
		for (int j = 0; j <  m; j++)
		{
			char type;
			double money;
			cin >> type >> money;
			if (n == 1)
			{
				ca = ca + money;
			}
			else if (n == 2)
			{
				cb = cb + money;
			}
			else if (n == 3)
			{
				cc = cc + money;
			}
			if (type == 'A')
			{
				a = a + money;
			}
			else if (type == 'B')
			{
				b = b + money;
			}
			else if (type == 'C')
			{
				c = c + money;
			}

		}
	}
	cout << "1 " << fixed<< setprecision(2) << ca << endl;
	cout << "2 " << fixed << setprecision(2) << cb << endl;
	cout << "3 " << fixed << setprecision(2) << cc << endl;
	cout << "A " << fixed << setprecision(2) << a << endl;
	cout << "B " << fixed << setprecision(2) << b << endl;
	cout << "C " << fixed << setprecision(2) << c << endl;
	return 0;
}