#include<iostream>
using namespace std;

int main()
{
	int num[100];
	int n, m;
	cin >> n >> m;
	int a, b;
	a = n;
	b = m;
	//ŷ������㷨��շת����������Լ�� bΪ�������Լ��
	int c = a%b;
	while (c)
	{
		a = b;
		b = c;
		c = a%b;
	}
	int gcd = b;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	int k,temp;
	for (int i = 0; i < gcd; i++)//��һ��Ԫ��ֱ�ӽ�������ƶ�mλ
	{
		/*5 2
		1 2 3 4 5
		2 1 3 4 5
		4 1 3 2 5
		*/
		k = 1;
		while (k <= n / gcd)
		{
			temp = num[i];
			num[i] = num[(i + k*m) % n];
			num[(i + k*m) % n] = temp;
			k++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	return 0;
}