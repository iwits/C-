#include<iostream>
using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	//�������ǽ���������������ߣ�ż�����������ұ�
	int left = 0, right = 9;//ʹ���������ֱַ�ָ����������
	while (left < right)//�Ƚ���ż�������߷ź�������
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

	//�ȶ�����������ֽ���ð�����򣬲��ϱȽ����ڵ������������˳�������ô����
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

	//�ұ�ż��
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