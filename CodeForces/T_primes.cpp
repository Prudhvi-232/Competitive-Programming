#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

bool isPrime(ll n) {
    if (n <= 1) return false; // Numbers less than or equal to 1 are not prime
    if (n <= 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Eliminate multiples of 2 and 3

    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false; // Check divisibility
    }

    return true; // If no factors found, n is prime
}
void solve()
{
    ll n;
    cin >> n;
    ll ct = 0;
    ll ab = sqrt(n);
    if (n <= 5 && n != 4)
    {
        no;
        return;
    }
    if (ab * ab != n)
    {
        no;
        return;
    }
    else
    {
        if (isPrime(ab))
        {
            yes;
            return;
        }
        no;
        return;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
