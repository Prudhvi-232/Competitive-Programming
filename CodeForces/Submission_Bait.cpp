#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    fr(n) {
        cin >> a[i];
    }

    unordered_map<int, int> hash;
    for (int num : a) {
        hash[num]++;
    }

    vector<pair<int, int>> hashv(hash.begin(), hash.end());

    sort(hashv.begin(), hashv.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first;
    });

    for (const auto& p : hashv) {
        if (p.second % 2 == 1) {
            yes
            return;
        }
    }
    no
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
