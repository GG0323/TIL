#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, tot = 0;
	cin >> n;
	string num;
	cin >> num;
	for (int i = 0; i < n; i++)
		tot += num[i] - '0';
	cout << tot;
}
