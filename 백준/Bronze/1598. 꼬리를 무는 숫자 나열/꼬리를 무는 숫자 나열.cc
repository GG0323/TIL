#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int x1 = (x - 1) / 4, x2 = (y - 1) / 4;
	int y1 = (x - 1) % 4, y2 = (y - 1) % 4;
	cout << abs(x1 - x2) + abs(y1 - y2);
}