#include<iostream>
using namespace std;

int main()
{
	int n, s=7, sum=5;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		sum += s;
		s += 3;

		sum %= 45678;
		s %= 45678;
	}
	cout << sum;
}
