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
        vector<long long> a(n), b(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int m;
        cin >> m;
        unordered_multiset<long long> d;
        long long x;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            d.insert(x);
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                auto it = d.find(b[i]);
                if (it != d.end())
                {
                    d.erase(it);
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        int in = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == x)
            {
                in = 1;
                break;
            }
            else
            {
                in = 0;
            }
        }
        if(flag == 1 && in == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
