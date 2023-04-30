#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << x * (y % 10) << '\n';
	cout << x * ((y / 10) % 10) << '\n';
	cout << x * (y / 100) << '\n';
	cout << x * y;
}
