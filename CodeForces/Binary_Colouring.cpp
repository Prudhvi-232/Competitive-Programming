#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        int sq = 1;
        int bits = 1;
        while (x > sq)
        {
            sq = sq << 1;
            bits++;
        }
        int arr[bits];
        arr[bits - 1] = 1;
        int dif = sq - x;
        
    }
}
