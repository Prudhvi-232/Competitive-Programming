#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, z;
        cin >> n >> z;
        int man;
        int maxnum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> man;
            int y = z | man;
            maxnum = max(maxnum, y);
        }
        cout << maxnum << endl;
    }
}
