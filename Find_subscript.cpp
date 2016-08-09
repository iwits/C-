#include<iostream>
using namespace std;

int main()
{
	int a[100];
	int n;
	while (cin >> n)
	{
		int result = -1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		    if (a[i] == i&&result == -1)
			{
				result = i;
			}

		}
		if (result == -1)
		{
			cout << "N" << endl;
		}
		else
		{
			cout << result << endl;
		}
	}
	
	return 0;
}