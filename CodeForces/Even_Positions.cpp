#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
typedef long long ll;
using namespace std;

int minCostRBS(const string& s, int n) {
    stack<int> stk;
    int cost = 0;
    vector<int> pairedIndex(n, -1);

    for (int i = 1; i < n; i += 2) {
        if (s[i] == '(') {
            stk.push(i);
        } else {
            if (!stk.empty()) {
                int openPos = stk.top();
                stk.pop();
                pairedIndex[openPos] = i;
            }
        }
    }

    // Now we calculate the cost
    for (int i = 0; i < n; i += 2) {
        if (pairedIndex[i + 1] != -1) {
            cost += pairedIndex[i + 1] - i - 1;
        }
    }

    return cost;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << minCostRBS(s, n)+n/2 << endl;
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
