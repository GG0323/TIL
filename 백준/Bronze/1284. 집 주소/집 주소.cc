#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num;
	int total,len;
	while (1)
	{
		cin >> num;
		if (num == "0")
			break;
		total = 2;
		len = num.size();
		total += len - 1;
		for (int i = 0; i < len; i++)
		{
			if (num[i] == '0')
				total += 4;
			else if (num[i] == '1')
				total += 2;
			else
				total += 3;
		}
		cout << total << '\n';
	}
}