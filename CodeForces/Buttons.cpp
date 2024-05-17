#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dif1 = 2;
    int x = 1, dif2 = 2;
    for (int i = 0; i < n - 1;i++){
        x += dif1;
        dif1 += dif2;
        dif2++;
    }
    cout << x;
}
