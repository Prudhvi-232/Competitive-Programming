#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
typedef long long ll;
using namespace std;

const int MAXN = 2e5 + 5;

// DFS function to explore and mark visited cells
void dfs(int x, int y, vector<vector<char>>& mat, vector<vector<bool>>& visited) {
    int n = mat[0].size();
    if (x < 0 || x >= 2 || y < 0 || y >= n || mat[x][y] == 'x' || visited[x][y]) return;
    visited[x][y] = true;
    dfs(x + 1, y, mat, visited);
    dfs(x - 1, y, mat, visited);
    dfs(x, y + 1, mat, visited);
    dfs(x, y - 1, mat, visited);
}

// Function to count the number of regions using DFS
int countRegions(vector<vector<char>>& mat) {
    int n = mat[0].size();
    vector<vector<bool>> visited(2, vector<bool>(n, false));
    int regions = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[i][j] == '.' && !visited[i][j]) {
                regions++;
                dfs(i, j, mat, visited);
            }
        }
    }
    return regions;
}

void solve() {
    int n;
    cin >> n;
    string row1, row2;
    cin >> row1 >> row2;
    
    vector<vector<char>> mat(2, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        mat[0][i] = row1[i];
        mat[1][i] = row2[i];
    }
    
    int originalRegions = countRegions(mat);
    
    int result = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[i][j] == '.') {
                // Temporarily block the cell and count regions
                mat[i][j] = 'x';
                int newRegions = countRegions(mat);
                if (newRegions == 3) {
                    result++;
                }
                // Unblock the cell
                mat[i][j] = '.';
            }
        }
    }
    
    cout << result << endl;
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
