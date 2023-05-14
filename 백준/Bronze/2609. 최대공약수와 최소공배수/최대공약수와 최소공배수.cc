#include<iostream>
using namespace std;

int main()
{
	int n1, n2, max = 1, min = 1;
	cin >> n1 >> n2;
	int m = n1 > n2 ? n1 : n2;

	for (int i = 1; i <= m; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			max = i;
	}
	min = n1 * n2 / max;
	cout << max << '\n' << min;
}