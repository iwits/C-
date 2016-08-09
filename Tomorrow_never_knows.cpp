#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char sign;
	int year, month, day;
	cin >> year >> sign >> month >> sign >> day;
	int is_leapyear;
	//»ÚƒÍ≈–∂œ
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		is_leapyear = 1;
	}
	else
	{
		is_leapyear = 0;
	}

	if (month == 1||month==3||month==5||month==7||month==8||month==10)
	{
		if (day == 31)
		{
			month++;
			day = 1;
		}
		else
		{
			day++;
		}
	}
	else if (month == 2)
	{
		if (is_leapyear == 1)
		{
			if (day == 29)
			{
				month++;
				day = 1;
			}
			else
			{
				day++;
			}
		}
		else
		{
			if (day == 28)
			{
				month++;
				day = 1;
			}
			else
			{
				day++;
			}
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
			if (day == 30)
			{
				month++;
				day = 1;
			}
			else
			{
				day++;
			}
		
	}
	else if (month == 12)
	{
		if (day == 31)
		{
			year++;
			month = 1;
			day = 1;
		}
		else
		{
			day++;
		}
	}
	cout << year << "-" << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << day << endl;
	return 0;
}