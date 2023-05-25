#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	if (n <= k)
	{
		cout << 0;
		return 0;
	}

	int store = 0, count, tmp;
	while (1)
	{
		tmp = n;
		count = 0;
		while (tmp!=0)
		{
			if (tmp % 2 != 0)
				count++;
			tmp /= 2;
		}
		if (count <= k)
			break;
		store++;
		n++;
	}
	cout << store;
	
}