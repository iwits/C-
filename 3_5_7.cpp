#include<iostream>
using namespace std;

int main()
{
	int a[3] = { 0 };
	int num;
	while (cin >> num)
	{
		for (int i = 0; i < 3; i++)
		{
			a[i] = 0;
		}
		if (num % 3 == 0)
		{
			a[0] = 3;
		}
		if (num % 5 == 0)
		{
			a[1] = 5;
		}
		if (num % 7 == 0)
		{
			a[2] = 7;
		}
		for (int i = 0; i < 3;i++)
		{
			if (a[0] == 0&&a[1]==0&&a[2]==0 && num != 0)
			{
				cout << "n";
				break;
			}
			else if (a[i] == 0)
			{
				continue;
			}
			else if (a[i] !=0)
			{
				cout << a[i] << " ";
				
			}
			
		}
		
		cout << endl;
	}
	
	return 0;
}