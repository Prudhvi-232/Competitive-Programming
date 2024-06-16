#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // Improve I/O performance
    cin.tie(NULL); // Untie cin and cout
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long k;
        cin >> k;
        long long x = 0;
        if (n & 1)
        {
            x = ((n / 2) * (n / 2 + 1) / 2) * 4;
        }
        else
        {
            x = ((n / 2) * (n / 2 + 1) / 2) * 4 - n;
        }
        vector<int> sequence(n);
        iota(sequence.begin(), sequence.end(), 1);
        long long currentSum = x;
        if (k % 2 == 0 && k <= x)
        {
            int left = 0, right = n - 1;
            while (currentSum <= k && left < right)
            {
                currentSum -= (right - left);
                swap(sequence[left], sequence[right]);
                left++;
                right--;
            }
            cout << "YES\n";
            for (int num : sequence)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}