#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n-1); // Use vector for dynamic size
        for (int i = 0; i < n-1; i++) {
            cin >> a[i];
        }
        int b;
        cin >> b;
        int max_a = *max_element(a.begin(), a.end()); // Correct usage of max_element
        cout << max_a + b << endl;
    }
    return 0;
}
