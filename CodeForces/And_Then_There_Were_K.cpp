#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        // a = a + 1;
        int i = 2;
        while (i <= a)
        {
            i = i << 1;
        }
        i = i >> 1;
        cout << i - 1 << endl;
    }
}
