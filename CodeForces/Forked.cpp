#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int k1, k2;
        cin >> k1 >> k2;
        int q1, q2;
        cin >> q1 >> q2;
        set<pair<int, int>> k;
        k.insert(make_pair(k1 + m, k2 + n));
        k.insert(make_pair(k1 + m, k2 - n));
        k.insert(make_pair(k1 - m, k2 + n));
        k.insert(make_pair(k1 - m, k2 - n));
        k.insert(make_pair(k1 + n, k2 - m));
        k.insert(make_pair(k1 - n, k2 - m));
        k.insert(make_pair(k1 + n, k2 + m));
        k.insert(make_pair(k1 - n, k2 + m));

        set<pair<int, int>> q;
        q.insert(make_pair(q1 + m, q2 + n));
        q.insert(make_pair(q1 + m, q2 - n));
        q.insert(make_pair(q1 - m, q2 + n));
        q.insert(make_pair(q1 - m, q2 - n));
        q.insert(make_pair(q1 + n, q2 - m));
        q.insert(make_pair(q1 - n, q2 - m));
        q.insert(make_pair(q1 + n, q2 + m));
        q.insert(make_pair(q1 - n, q2 + m));

        vector<pair<int, int>> kf(k.begin(), k.end());
        vector<pair<int, int>> qf(q.begin(), q.end());
        int count = 0;
        for (auto i:kf){
            for(auto j:qf){
                if(i.first==j.first && j.second==i.second){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
