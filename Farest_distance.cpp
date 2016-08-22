#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double x[100], y[100];
	double width = 0, high = 0,distance=0,Max=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			width = abs(x[i] - x[j]);
			high = abs(y[i] - y[j]);
			distance = sqrt(width*width + high*high);
			if (distance > Max)
			{
				Max = distance;
			}
		}
	}
	cout << fixed << setprecision(4) << Max << endl;
	return 0;

}