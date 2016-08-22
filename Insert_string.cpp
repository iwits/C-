#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[10], substr[4];
	while(cin.getline(str, 10,' '))
	{ 
		cin.getline(substr, 4);
		char flag = '\0';
		int Max;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (flag - str[i]<0)
			{
				flag = str[i];
				Max = i;
			}
		}
		for (int i = 0; i <= Max; i++)
		{
			cout << str[i];
		}
		for (int i = 0; i <3; i++)
		{
			cout << substr[i];
		}
		for (int i = Max + 1; str[i] != '\0'; i++)
		{
			cout << str[i];
		}
		cout << endl;
	
	}
	
	return 0;
}