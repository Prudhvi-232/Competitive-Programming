#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<string> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[m - 1][i] == 'D')
                count++;
        }
        for (int i = 0; i < m; i++)
        {
            if (a[i][n - 1] == 'R')
                count++;
        }
        cout << count << endl;
    }
}
