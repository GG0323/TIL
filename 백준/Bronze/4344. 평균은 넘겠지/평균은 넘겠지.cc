#include<iostream>
using namespace std;

int main()
{
	int t, c, count;
	double avg, result;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		avg = 0;
		count = 0;
		cin >> c;
		int* s = new int[c];
		for (int j = 0; j < c; j++)
		{
			cin >> s[j];
			avg += s[j];
		}
		avg /= c;
		for (int j = 0; j < c; j++)
		{
			if (s[j] > avg)
				count++;
		}
		result = (double)count / c * 100;
		printf("%.3f", result);
		cout << "%\n";
		delete[]s;
	}
}