#include<iostream>
using namespace std;

int main()
{
	int num;
	for (int i = 0; i < 3; i++)
	{
		int pl[2] = { 0 };
		for (int j = 0; j < 4; j++)
		{
			cin >> num;
			pl[num]++;
		}
		if (pl[0] == 1)
			cout << "A\n";
		else if (pl[0] == 2)
			cout << "B\n";
		else if (pl[0] == 3)
			cout << "C\n";
		else if (pl[0] == 4)
			cout << "D\n";
		else if (pl[1] == 4)
			cout << "E\n";
	}
}
