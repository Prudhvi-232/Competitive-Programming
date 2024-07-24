#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vi sequence(n);
    fr(n) cin >> sequence[i];

    unordered_map<int, int> freq;
    for (int num : sequence) {
        freq[num]++;
    }

    vector<pair<int, int>> freqVec(freq.begin(), freq.end());
    sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    int distinctCount = freq.size();
    int dup = n - distinctCount;
    int largestK = 0;
    int z = 0;

    fr(distinctCount) {
        int ff = i + 1;
        z = z + freqVec[i].second;
        if (z % ff == 0) {
            largestK = max(largestK, z);
        } else {
            int rem = z % ff;
            if (rem <= dup) {
                largestK = max(largestK, z - rem);
            }
        }
    }

    cout << largestK << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
