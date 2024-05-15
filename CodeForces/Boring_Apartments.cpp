#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
    int digits = 0, rem = 0;
    int remp = x;
    while (remp != 0)
    {
        rem = remp % 10;
        digits++;
        remp /= 10;
    }
    int sum = 0;
    for (int i = 1; i <= digits;i++){
        sum += i;
    }
    cout << (10 * (rem - 1)) + sum << endl;
    }
}
