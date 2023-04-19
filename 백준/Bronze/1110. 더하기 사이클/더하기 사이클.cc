#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, stm, count = 0;
	cin >> n;
	stm = n;
	while (1)
	{
		int tens = (n % 10) * 10;
		int first = (n / 10 + n % 10) % 10;
		n = tens + first;
		count++;
		if (stm== n)
			break;
	}
	cout << count;
}