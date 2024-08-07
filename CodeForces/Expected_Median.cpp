#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 2e5 + 5;

vector<long long> fact(MAX), inv_fact(MAX);

// Function to compute x^p % mod
long long mod_pow(long long x, long long p, long long mod) {
    long long res = 1;
    while (p > 0) {
        if (p % 2 == 1) res = (res * x) % mod;
        x = (x * x) % mod;
        p /= 2;
    }
    return res;
}

// Function to precompute factorials and modular inverses
void precompute_factorials(int max_n, int mod) {
    fact[0] = 1;
    for (int i = 1; i <= max_n; ++i) {
        fact[i] = fact[i - 1] * i % mod;
    }
    inv_fact[max_n] = mod_pow(fact[max_n], mod - 2, mod);
    for (int i = max_n - 1; i >= 0; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % mod;
    }
}

// Function to compute binomial coefficient n choose k
long long binom(int n, int k, int mod) {
    if (k > n || k < 0) return 0;
    return fact[n] * inv_fact[k] % mod * inv_fact[n - k] % mod;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    long long one = 0, zer = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] == 0)
            zer++;
        else
            one++;
    }

    long long rem = n - k;
    long long ans = 0;

    // Calculate the range for x
    long long start = max(0LL, one - rem);
    long long end = min(one, (long long)k);

    for (long long x = start; x <= end; ++x) {
        if(x>k-x){

        ans = (ans + binom(one, x, MOD) * binom(zer, k - x, MOD)) % MOD;
        }
    }
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompute_factorials(MAX - 1, MOD);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
