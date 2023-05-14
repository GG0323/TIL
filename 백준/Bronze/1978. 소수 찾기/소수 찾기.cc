#include<iostream>
using namespace std;

int main()
{
	int n, count = 0, num, check;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		check = 0;
		if (num != 1)
		{
			for (int j = 1; j < num; j++)
			{
				if (num % j == 0)
					check++;
			}
		}
		if (check == 1)
			count++;
	}
	cout << count;
}