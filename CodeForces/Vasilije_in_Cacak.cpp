#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long a, b,c;
        a = (n * (n + 1)) / 2;
        b = ((n-k) * (n-k + 1)) / 2;
        c = (k * (k + 1)) / 2;
        if(a-b>=x && x>=c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
