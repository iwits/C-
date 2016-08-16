/*#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a[100][100] = { 0 };
	int N,Abnormal=0;
	while (cin >> N)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 1; i < N - 1; i++)
		{
			for (int j = 1; j < N - 1; j++)
			{
				if (abs(a[i][j] - a[i - 1][j]) >= 50 && abs(a[i][j] - a[i + 1][j]) >= 50 && abs(a[i][j] - a[i][j - 1]) >= 50 && abs(a[i][j] - a[i][j + 1]) >= 50)
				{
					Abnormal++;
					cout << i << " " << j << endl;
				}

			}
		}
		cout << Abnormal << endl;
	}
	return 0;
}*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main() {

	int array[100][100];

	int i, j, n;

	int count, left, right, top, bottom;

	cin >> n;

	for (i = 0; i < n; ++i) {

		for (j = 0; j < n; ++j) {

			cin >> array[i][j];

		}

	}

	count = 0;

	for (i = 1; i < n - 1; ++i) {

		for (j = 1; j < n - 1; ++j) {

			int left = abs(array[i][j] - array[i][j - 1]) >= 50;

			int right = abs(array[i][j] - array[i][j + 1]) >= 50;

			int top = abs(array[i][j] - array[i - 1][j]) >= 50;

			int bottom = abs(array[i][j] - array[i + 1][j]) >= 50;

			if (left && right &&top && bottom)

				++count;

		}

	}

	cout << count << endl;

	return 0;

}