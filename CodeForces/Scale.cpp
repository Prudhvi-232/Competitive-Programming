#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<string> matrix(n);

    // Read the matrix as strings
    for (int i = 0; i < n; i++) {
        cin >> matrix[i];
    }

    int size = n / k;
    vector<string> reduced(size, string(size, ' '));

    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            reduced[i / k][j / k] = matrix[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        cout << reduced[i] << endl;
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
