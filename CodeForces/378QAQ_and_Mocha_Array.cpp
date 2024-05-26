#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int x = a[0], y = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] % x != 0)
            {
                y = a[i];
                break;
            }
        }
        if (n <= 2 || y == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            int ct = 0;
            for (long long i = 1; i < n; i++)
            {
                if (a[i] % x == 0 || a[i] % y == 0)
                {
                    ct++;
                }
            }
            if (ct == n - 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
