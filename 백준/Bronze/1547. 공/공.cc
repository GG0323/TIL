#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, ch1, ch2, tmp;
	int ball[3] = { 1 };
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> ch1 >> ch2;
		tmp = ball[ch1-1];
		ball[ch1-1] = ball[ch2-1];
		ball[ch2-1] = tmp;
	}
	for (int i = 0; i < 3; i++)
	{
		if (ball[i] == 1)
			cout << i+1;
	}
}