#include<iostream>
using namespace std;

int main() {
	int n, max = 2, min = 1000000, num;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		max = num > max ? num : max;
		min = num < min ? num : min;
	}
	cout << max * min;
}