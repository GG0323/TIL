#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, tot=0;
	cin >> n;

	tot += (int)pow(n % 10, 5);
	for (; (n / 10) != 0; )
	{		
		n /= 10;
		tot += (int)pow(n % 10, 5);
	}
	cout << tot;
}