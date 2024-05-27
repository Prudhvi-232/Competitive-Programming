#include <bits/stdc++.h>
using namespace std;
#define e 1000000007

int power(long long n, long long m, long long mod)
{
    long long result = 1;
    while (m > 0)
    {
        if (m % 2 == 1)
        {
            result = (result * n) % mod;
        }
        n = (n * n) % mod;
        m = m / 2;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long sum = 0;
        int x = 0;
        while (k > 0)
        {
            int bit = k & 1;
            if (bit)
            {
                sum = (sum + power(n, x, e)) % e;
            }
            x++;
            k = k >> 1;
        }
        cout << sum << endl;
    }
}
