#include <bits/stdc++.h>
#define int long long

using namespace std;

int check(int target, vector<int> &a) {
    int sor = 0, y = 0;
    for (auto &val : a) {
        if (val > target) continue;
        sor |= val;
        y++;
    }
    return (sor == target ? a.size() - y : a.size());
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &val : a) cin >> val;

        int ans = n;
        for (int i = 0; i < 32; i++) {
            int target = (1LL << i) - 1;
            ans = min(ans, check(target, a));
        }

        cout << ans << endl;
    }
    return 0;
}