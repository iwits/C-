#include<iostream>
#include<iomanip>
#define N 100
using namespace std;

int main()
{
	int n, a[N] = {0}, b[4] = {0};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] >= 1 && a[i] <= 18)
		{
			b[0]++;
		}
		else if (a[i] >= 19 && a[i] <= 35)
		{
			b[1]++;
		}
		else if (a[i] >= 36 && a[i] <= 60)
		{
			b[2]++;
		}
		else
		{
			b[3]++;
		}
	}
	
	cout << "1-18: " << fixed << setprecision(2) << b[0]*100.0 / n <<"%"<< endl;
	cout << "19-35: "<< fixed << setprecision(2) << b[1]*100.0 / n <<"%"<< endl;
	cout << "36-60: " << fixed << setprecision(2) << b[2]*100.0/ n <<"%"<< endl;
	cout << "60-: " << fixed << setprecision(2) << b[3]*100.0 / n <<"%"<<endl;
	return 0;
}