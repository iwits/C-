#include<iostream>
using namespace std;

int main()
{
	
	int result=0;
	int a, b;
	char c;
	cin >> a >> b >> c;
	if (b == 0 && c=='/')
	{
		cout << "Divided by zero!" << endl;
	}
	else if (c == '+')
	{
		result = a + b;
		cout << result << endl;
	}
	else if (c == '-')
	{
		result = a - b;
		cout << result << endl;
	}
	else if (c == '*')
	{
		result = a * b;
		cout << result << endl;
	}
	else if (c == '/')
	{
		result = a / b;
		cout << result << endl;
	}
	else
	{
		cout << "Invalid operator!" << endl;
	}
	return 0;
}