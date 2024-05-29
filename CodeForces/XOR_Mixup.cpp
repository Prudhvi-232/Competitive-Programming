#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x = x ^ a[i];
        }
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            int z = x ^ a[i];
            if (z == a[i])
            {
                y = i;
                break;
            }
        }
        cout << a[y] << endl;
    }
}
