#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int t, h, w, n;
	int result;
	cin >> t;
	for (int i = 0; i < t; i++) 
	{
		cin >> h >> w >> n;

		if (n % h == 0)
			result = h * 100 + (n / h);

		else
			result = (n % h) * 100 + ceil((double)n / h);
		
		cout << result << '\n';
	}
}