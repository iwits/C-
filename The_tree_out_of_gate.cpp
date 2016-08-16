/*#include<iostream>
using namespace std;

int main()
{
	int L, M, number = 0;
	while (cin >> L >> M)
	{
		int start[100], end[100], length[1000] = { 0 };
		for (int i = 0; i < M; i++)
		{
			cin >> start[i] >> end[i];
			for (int j = start[i]; j <= end[i]; j++)
			{
				length[j] = 1;
			}
		}
		for (int i = 0; i <= L; i++)
		{
			if (length[i] == 0)
				number++;
		}
		cout << number << endl;
	}
	return 0;
}*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int L, m, i, j;
	int a, b;
	int k[10002] = { 0 };
	int s = 0;
	cin >> L >> m;
	for (i = 0; i<m; i++)
	{
		cin >> a >> b;
		for (j = a; j <= b; j++)
		{
			k[j] = 1;
		}
	}
	for (i = 0; i <= L; i++)
	{
		if (k[i] == 1) s++;
	}
	cout << L + 1 - s << endl;
	return 0;
}
