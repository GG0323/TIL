#include<iostream>
using namespace std;

int main() {
    int n, k, re = 0, count = 0;

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (count == k)
            {
                re = i;
                break;
            }

        }
           
    }
    cout << re;
}