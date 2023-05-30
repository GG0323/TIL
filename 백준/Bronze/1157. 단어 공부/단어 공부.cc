#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int count[26] = { 0 }, max = 0, index;
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);

	for (int i = 0; i < s.size(); i++)
	{
		count[s[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == count[i])
		{
			index = -1;
		}
		else if (max < count[i])
		{
			max = count[i];
			index = i;
		}
	}
	if (index == -1)
		cout << "?";
	else
		printf("%c", index + 65);
}