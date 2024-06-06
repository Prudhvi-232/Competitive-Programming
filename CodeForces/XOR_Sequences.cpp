#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        long long z = x ^ y;
        long long i = 1;
        while ((z & 1) == 0)
        {
            z >>= 1;
            i <<= 1;
        }
        cout << i << endl;
    }
}
