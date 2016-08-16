#include<iostream>
using namespace std;

int main()
{
	char sys[500];
	while (cin.getline(sys, 500, '\n'))//读到英文句号作为结束，否则读完500
	{
		int start = 0, end = 0, MaxLength = 0, MaxStart = 0;
		for (int i = 0; sys[i] != '\0'; i++)
		{
			if (sys[i] == ' ' || sys[i] == '.')
			{
				end = i;
				if (MaxLength < (end - start))
				{
					MaxLength = end - start;
					MaxStart = start;
				}
				start = end + 1;
			}

		}
		for (int i = 0; i < MaxLength; i++)
		{
			cout << sys[MaxStart + i];
		}
		cout << endl;
	}
	return 0;
}