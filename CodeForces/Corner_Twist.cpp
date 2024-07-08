#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    
    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < m; ++j) {
            a[i][j] = row[j] - '0';
        }
    }
    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < m; ++j) {
            b[i][j] = row[j] - '0';
        }
    }
    
    vector<int> rsuma(n, 0);
    vector<int> rsumb(n, 0);
    vector<int> csuma(m, 0);
    vector<int> csumb(m, 0);
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rsuma[i] = (rsuma[i] + a[i][j]) % 3;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rsumb[i] = (rsumb[i] + b[i][j]) % 3;
        }
    }
    
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            csuma[j] = (csuma[j] + a[i][j]) % 3;
        }
    }
    
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            csumb[j] = (csumb[j] + b[i][j]) % 3;
        }
    }
    
    bool rows_match = true;
    for (int i = 0; i < n; ++i) {
        if (rsuma[i] != rsumb[i]) {
            rows_match = false;
            break;
        }
    }
    bool cols_match = true;
    for (int j = 0; j < m; ++j) {
        if (csuma[j] != csumb[j]) {
            cols_match = false;
            break;
        }
    }
    
    if (rows_match && cols_match) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
