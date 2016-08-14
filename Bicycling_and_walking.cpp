#include<iostream>
using namespace std;

int main()
{
	int n,meter=0;
	cin >> n;
	double bike=0, walk=0;
	while (n)
	{
		cin >> meter;
		bike = 50 + meter / 3.0;
		walk = meter / 1.2;
		if (bike < walk)
		{
			cout << "Bike" << endl;
		}
		else if (bike > walk)
		{
			cout << "Walk" << endl;
		}
		else
		{
			cout << "All" << endl;
		}
		bike = walk = 0;
		n--;
	}
	return 0;
}