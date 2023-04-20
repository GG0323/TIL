#include<iostream>
using namespace std;

int main()
{
	string GPA;
	cin >> GPA;
	switch (GPA[0]) {
	case 'A':
		if (GPA[1] == '+')
			cout << 4.3;
		else if (GPA[1] == '0')
			printf("%.1f", 4.0);
		else
			cout << 3.7;
		break;
	case'B':
		if (GPA[1] == '+')
			cout << 3.3;
		else if (GPA[1] == '0')
			printf("%.1f", 3.0);
		else
			cout << 2.7;
		break;
	case 'C':
		if (GPA[1] == '+')
			cout << 2.3;
		else if (GPA[1] == '0')
			printf("%.1f", 2.0);
		else
			cout << 1.7;
		break;
	case'D':
		if (GPA[1] == '+')
			cout << 1.3;
		else if (GPA[1] == '0')
			printf("%.1f", 1.0);
		else
			cout << 0.7;
		break;
	default:
		printf("%.1f", 0.0);
	}
}