#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 0;
    int y = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        x = x+b - a;
        y = max(y, x);
    }
    cout << y;
}
