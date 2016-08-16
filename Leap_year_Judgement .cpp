#include<iostream>
using namespace std;

int main()
{
	int flag = 0, year;
	cin >> year;
	if (year % 400 == 0 ||year%100!=0&&year % 4 == 0 )
	{
		if (year % 3200 == 0)
		{
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		
	}

	if (flag == 1)
	{
		cout << "Y" <<endl;
	}
	else
	{
		cout << "N" << endl;
	}
	return 0;
}