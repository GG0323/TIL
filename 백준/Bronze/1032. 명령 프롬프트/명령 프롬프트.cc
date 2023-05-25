#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string* s = new string[n];

	for (int i = 0; i < n; i++)
		cin >> s[i];

	int len = s[0].size();

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (s[0][j] != s[i][j])
				s[0][j] = '?';
		}
	}
	cout << s[0];
	delete[]s;
}