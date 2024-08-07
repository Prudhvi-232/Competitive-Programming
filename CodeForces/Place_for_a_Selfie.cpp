#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int, null_type, std::less<int>, rb_tree_tag, tree_order_statistics_node_update> super_set;
// to run these use wsl g++ -o name file.cpp and to print output ./name
// #define rank order_of_key
// #define atrank find_by_order
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define fr(n) for (long long i = 0; i < n; i++)
#define fv(i, a)     \
    for (auto i : a) \
        cout << i << " ";
#define sort(a) sort(a.begin(), a.end());
#define reverse(a) reverse(a.begin(), a.end());
#define mup unordered_map<long long, long long>
#define mp unordered_map<long long, long long>
typedef long long ll;
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    set<ll> s;
    fr(n - 1)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    fr(m - 1)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c < 0)
        {
            cout << "NO" << endl;
            continue;
        }
        double x = b + (double)2 * sqrt(a * c);
        ll maxi = ceil(x);
        auto k = s.lower_bound(maxi);
        if (k == s.begin())
        {
            cout << "NO" << endl;
        }
        else
        {
            double y = b - (double)2 * sqrt(a * c);
            ll mini = floor(y);
            k--;
            if (*k <= mini)
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                cout << *k << endl;
            }
        }
    }
}

int32_t main()
{
    // typedef gp_hash_table<int, int> hash_table;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
