#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[80], str2[80];
	cin.getline(str1, 80);
	cin.getline(str2, 80);
	for (int i = 0; i < 80; i++)
	{
		//同意字母为大写字母，在调用strcmp函数来比较
		if (str1[i] >= 'a'&&str1[i] <= 'z')
		{
			str1[i] = str1[i] - 32;
		}
		if (str2[i] >= 'a'&&str2[i] <= 'z')
		{
			str2[i] = str2[i] - 32;
		}
	}
	int flag = strcmp(str1, str2);
	if (flag == 0)
	{
		cout << "=" << endl;
	}
	else if (flag > 0)
	{
		cout << ">" << endl;
	}
	else
	{
		cout << "<" << endl;
	}
	return 0;
}