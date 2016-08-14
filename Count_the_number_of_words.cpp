#include<iostream>
using namespace std;

int main()
{
	
	int num[5] = { 0 };
	char sys[100];
	cin.getline(sys, 80);
	for (int i = 0; sys[i] != '\0'; i++)
	{
		if (sys[i] == 'a')
		{
			num[0]++;
		}
		else if (sys[i] == 'e')
		{
			num[1]++;
		}
		else if (sys[i] == 'i')
		{
			num[2]++;
		}
		else if (sys[i] == 'o')
		{
			num[3]++;
		}
		else if (sys[i] == 'u')
		{
			num[4]++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	return 0;
}