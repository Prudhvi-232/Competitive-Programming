#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    
    if (n <= 1) {
        no; // 0 and 1 are not prime numbers
        return;
    }
    
    int flag = -2;
    for (ll i = 2; i*i<= n*2; i++) {
        if (flag == 0 && n % i == 0 ) {
            flag = -1;
            break;
        }
        if (n % i == 0 && flag == -2) {
            flag = 0;
        }
    }
    
    if (flag == -1) {
        no
    } else if (flag == -2) {
        no // prime number
    } else if (flag == 0) {
        yes // first divisor found
    } else {
        yes
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
