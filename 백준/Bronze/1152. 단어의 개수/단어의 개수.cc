#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	int count = 0;
	count = s[0] != ' ' ? 1 : 0;
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i - 1] == ' ' && s[i] != ' ')
			count++;
	}
	cout << count;
}