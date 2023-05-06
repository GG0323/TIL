#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int* pn = new int[n];
	for (int i = 0; i < n; i++)
		cin >> pn[i];
	bool x = true;
	while (x)
	{
		x = false;
		for (int i = 1; i < n; i++)
		{
			int stm;
			if (pn[i] < pn[i - 1])
			{
				stm = pn[i];
				pn[i] = pn[i - 1];
				pn[i - 1] = stm;
				x = true;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << pn[i] << '\n';
	delete[]pn;
}