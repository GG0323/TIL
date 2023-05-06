#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	int cnt[10] = { 0 };
	int result = a * b * c;
	while (result / 10 != 0)
	{
		cnt[result % 10]++;
		result /= 10;
	}
	cnt[result % 10]++;
	for (int i = 0; i < 10; i++)
		cout << cnt[i] << '\n';
}