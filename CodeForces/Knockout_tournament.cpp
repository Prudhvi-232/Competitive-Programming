#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, std::less<int>, rb_tree_tag, tree_order_statistics_node_update> super_set;
using namespace std;

#define rank order_of_key
#define atrank find_by_order
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define fr(n) for (long long i = 0; i < n; i++)
#define fv(i, a)     \
    for (auto i : a) \
        cout << i << " ";
#define my_sort(a) sort(a.begin(), a.end())
#define my_reverse(a) reverse(a.begin(), a.end())
#define mup unordered_map<long long, long long>
#define mp unordered_map<long long, long long>
typedef long long ll;

void solve()
{
    super_set s;
    ll n = 16;
    vector<ll> elements(n);

    // Read elements and insert into the super_set while keeping the original order
    fr(n)
    {
        cin >> elements[i];
        s.insert(elements[i]);
    }

    int a[16] = {0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4};

    fr(n)
    {
        int x = s.rank(elements[i]);
        cout << a[x] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
