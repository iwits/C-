#include<iostream>
using namespace std;

int main()
{
	int n, k,a[1000],Max_K=0,Max_ki=0;
	cin >> n>>k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < k; i++)
	{
		Max_K = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j] > Max_K)
			{
				Max_K = a[j];
				Max_ki = j;
			}
		}
		a[Max_ki] = 0;
	}
	cout << Max_K << endl;
	return 0;
}
