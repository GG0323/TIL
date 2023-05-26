#include<iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int min = w - x < x ? w - x : x;
	min = y < min ? y : min;
	min = h - y < min ? h - y : min;
	cout << min;
}