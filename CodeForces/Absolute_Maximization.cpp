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
        int mand = 1023;
        int mor = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mand = mand & x;
            mor = mor | x;
        }
        cout << abs(mand - mor) << endl;
    }
}
