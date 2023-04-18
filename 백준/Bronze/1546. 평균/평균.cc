#include<iostream>
using namespace std;

int main()
{
	int n, max = 0;
	double tot = 0;
	cin >> n;
	int* point = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> *(point + i);
		if (max < *(point + i))
			max = *(point + i);
		tot += *(point + i);
	}
	printf( "%.2f",(tot / (max * n) * 100));
	delete[]point;
}