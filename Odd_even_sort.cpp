#include<iostream>
using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	//首先我们将奇数放在数组左边，偶数放在数组右边
	int left = 0, right = 9;//使用左手右手分别指向数组两端
	while (left < right)//先将奇偶数分两边放好在排序
	{
		bool leftIsOdd = a[left] % 2 == 1;
		bool rightIsEven = a[right] % 2 == 0;
		if(leftIsOdd)
		{ 
			left++;
		}
		else if (rightIsEven)
		{
			right--;
		}
		else
		{
			int temp = a[left];
			a[left] = a[right];
			a[right] = temp;
		}
	}

	//先对左边奇数部分进行冒泡排序，不断比较相邻的两个数，如果顺序错误，那么调换
	int start = 0, end = left;
	for (int i = start; i < end -1; i++)
	{
		for (int j = start + 1; j < start + end - i; j++)
		{
			if (a[j] > a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}

	//右边偶数
	start = left, end = 10;
	for (int i = start; i < end - 1; i++)
	{
		for (int j = start + 1; j < end + start - i; j++)
		{
			if (a[j] > a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	 
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}