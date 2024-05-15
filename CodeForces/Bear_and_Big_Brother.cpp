#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int i = 0;
    while (a <= b)
    {
        i++;
        a = 3 * a * i;
        b = 2 * b * i;
    }
    cout << i;
}
