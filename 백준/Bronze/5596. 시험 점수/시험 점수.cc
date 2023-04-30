#include<iostream>
using namespace std;

int main()
{
	int s_t[2] = {0}, score;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> score;
			s_t[i] += score;
		}
	}
	if (s_t[0] >= s_t[1])
		cout << s_t[0];
	else
		cout << s_t[1];
}