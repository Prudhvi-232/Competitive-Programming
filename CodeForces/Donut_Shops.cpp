#include <bits/stdc++.h>
using namespace std;

int hello(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n * hello(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int x = hello(n);
    cout << x;
}
