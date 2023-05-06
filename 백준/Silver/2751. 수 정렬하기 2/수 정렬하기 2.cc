#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int* pn = new int[n];
    for (int i = 0; i < n; i++)
        cin >> pn[i];

    sort(pn, pn + n);

    for (int i = 0; i < n; i++)
        cout << pn[i] << '\n';
    delete[]pn;
}
