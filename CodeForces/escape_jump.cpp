#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, h;
        cin >> n >> k >> h;
        long long i1 = 1, j1 = 1;
        long long i = 1, j = 1;
        long long tot = 0;
        while (i1) {
            while (j1) {
                if ((max((i - j) * k, 0LL) + j) >= h) {
                    ++j;
                    tot += (n - i + 1);
                } else {
                    ++i;
                }
                if (i > n || j > n) {
                    i1 = 0;
                    j1 = 0;
                }
            }
        }
        cout << tot << endl;
    }
    return 0;
}
