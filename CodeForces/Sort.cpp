#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;

    // Frequency prefix sums for characters 'a' and 'b'
    vector<vector<int>> prefixA(n + 1, vector<int>(26, 0));
    vector<vector<int>> prefixB(n + 1, vector<int>(26, 0));

    for (int i = 0; i < n; i++) {
        prefixA[i + 1] = prefixA[i];
        prefixB[i + 1] = prefixB[i];
        prefixA[i + 1][a[i] - 'a']++;
        prefixB[i + 1][b[i] - 'a']++;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        vector<int> freqA(26, 0), freqB(26, 0);

        for (int i = 0; i < 26; i++) {
            freqA[i] = prefixA[r + 1][i] - prefixA[l][i];
            freqB[i] = prefixB[r + 1][i] - prefixB[l][i];
        }

        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans += abs(freqA[i] - freqB[i]);
        }

        cout << ans / 2 << endl;
    }
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
