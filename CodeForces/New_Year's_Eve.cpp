#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long x = 1;
    while (x <= n)
    {
        x = x << 1;
    }
    if (k == 1)
    {
        cout << n << endl;
    }
    else
    {
        cout << x - 1 << endl;
    }
}
