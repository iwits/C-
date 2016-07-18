#include<iostream>
using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	//1.根据比较数值的大小来决定顺序
	//2.除此之外，如果左边的数为偶数，右边为奇数，那么顺序也需要颠倒
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 1; j < 10 - i; j++)
		{
			bool leftIsEven = a[j - 1] % 2 == 0;
			bool rightIsEven = a[j] % 2 == 0;
			if ((leftIsEven && !rightIsEven) || (leftIsEven == rightIsEven && a[j - 1] > a[j]))
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
