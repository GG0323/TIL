#include<iostream>
using namespace std;

int main()
{
	int time, tot = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> time;
		tot += time;
	}
	cout << tot / 60 << '\n' << tot % 60;
}