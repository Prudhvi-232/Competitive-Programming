#include <bits/stdc++.h>
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    bool hasOne = false;
    bool allOnes = true;

    fr(n) {
        cin >> a[i];
        if (a[i] == 1) {
            hasOne = true;
        } else {
            allOnes = false;
        }
    }

    if (allOnes) {
        cout << 0 << endl;
        return;
    }

    if (hasOne && a[0] != 1) {
        cout << -1 << endl;
        return;
    }

    ll count = 0; 
    ll val = a[0];
    
    for (int i = 1; i < n; i++) {
        int am;
        ll newValue = a[i];
        if(val>INT_MAX){
            am++;
            count += am;
        }
        else{
             am = 0;
            while (val > newValue) {
                newValue *= newValue;
                count++;
                am++;
            }
            val = newValue;
        }
    }
    cout << count << endl;
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
