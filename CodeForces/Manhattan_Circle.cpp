#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int mini = INT_MAX, minj = INT_MAX;
        int maxi = INT_MIN, maxj = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                if (x == '#')
                {
                    if (i < mini) mini = i;
                    if (j < minj) minj = j;
                    if (i > maxi) maxi = i;
                    if (j > maxj) maxj = j;
                }
            }
        }

        int reali = (mini + maxi) / 2 + 1; // +1 for 1-based indexing
        int realj = (minj + maxj) / 2 + 1; // +1 for 1-based indexing
        cout << reali << " " << realj << endl;
    }
    return 0;
}
