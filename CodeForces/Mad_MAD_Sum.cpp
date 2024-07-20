#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int findMaxRepeatingElement(const vector<int>& arr, int n) {
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i < n; i++) {
        frequencyMap[arr[i]]++;
    }

    int maxCount = 0;
    int maxElement = 0;
    bool hasRepeating = false;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxElement = pair.first;
            hasRepeating = true;
        } else if (pair.second == maxCount && pair.first > maxElement) {
            maxElement = pair.first;
        }
    }

    if (maxCount == 1) {
        return 0;
    }

    return maxElement;
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    fr(n) {
        cin >> a[i];
    }
    vi b(n, 0);
    ll sum = 0;

    // Replace the array and calculate sum until the condition is met
    while (true) {
        bool updated = false;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            int x = findMaxRepeatingElement(a, i + 1); // Use i + 1 to consider up to the ith index
            if (b[i] != x) {
                updated = true;
            }
            b[i] = x;
        }
        if (!updated) break; // Exit loop if no update was made
        for (int i = 0; i < n; i++) {
            a[i] = b[i];
        }
    }

    cout << sum << endl;
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
