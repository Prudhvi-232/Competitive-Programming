#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int y = 0;
    while (t--)
    {
        string x;
        cin >> x;
        if (x == "++X")
        {
            ++y;
        }
        else if (x == "X++")
        {
            y++;
        }
        else if (x == "X--")
        {
            y--;
        }
        else if (x == "--X")
        {
            --y;
        }
    }
    cout << y << endl;
}
