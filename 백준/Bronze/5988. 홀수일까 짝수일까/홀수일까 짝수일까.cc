#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, num;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		num=s[s.length()-1]-'0';
		if (num % 2 == 0)
			cout << "even\n";
		else
			cout << "odd\n";
	}
}
