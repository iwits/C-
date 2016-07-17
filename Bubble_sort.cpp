#include<iostream>
using namespace std;

int main()
{
	int n, a[1000];//输入n个数字
	cin >> n;
	for (int i = 0;i < n;i++)
	{

		cin >> a[i];
	}

	/*冒泡排序,不断比较相邻的两个数，顺序错误则交换*/
	for (int i = 0; i < n - 1; i++)//n个数需要比较n趟
	{
		for (int j = 1; j < n - i; j++)//每一趟都是相邻的两个数做比较
		{
			if (a[j - 1] > a[j])
			{
				int temp = a[j ];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}

	/*按序输出*/
	for(int i = 0; i < n;i++ )
	{
		cout << a[i] << endl;
	}
	return 0;
}
