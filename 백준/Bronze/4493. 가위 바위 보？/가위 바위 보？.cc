#include<iostream>
using namespace std;

int main()
{
	int t, n;
	char p1, p2;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int  countp1 = 0, countp2 = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> p1;
			cin.ignore();
			cin >> p2;
			cin.ignore();
			if (p1 == 'R' && p2 == 'S' || p1 == 'S' && p2 == 'P' || p1 == 'P' && p2 == 'R')
				countp1++;
			else if (p1 == p2)
				continue;
			else
				countp2++;
		}
		if (countp1 > countp2)
			cout << "Player 1\n";
		else if (countp1 == countp2)
			cout << "TIE\n";
		else
			cout << "Player 2\n";
	}
}
