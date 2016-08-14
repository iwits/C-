#include<iostream>
using namespace std;

int main()
{
	bool flag=false;
	int n, k;
	int a[1000];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (flag == true)
		{
			break;
		}
		else
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] + a[j] == k)
				{
					flag = true;
					break;
				}
			}
		}
	}
	if (flag == true)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	return 0;
}