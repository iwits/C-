#include<iostream>
using namespace std;

int main()
{
	int n;
	int digit;
	cin >> n;
	for  (int i =0;i<3;i++)
	{
		digit = n % 10;
		n = n / 10;
		cout << digit<<endl;
	}
	return 0;
}