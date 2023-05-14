#include<iostream>
using namespace std;

int main() {
	int a, b, n, result=0;
	cin >> a >> b >> n;
	for (int i = 0; i < n; i++)
	{
		a %= b;
		a *= 10;
		result = a / b;
	}
	cout << result;
}