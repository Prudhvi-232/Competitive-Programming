#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sixes = 0, two = 0, three = 0;
    int moves = 0;
    while(n>1){
        if(n%6==0){
            n /= 6;
            sixes++;
        }
        else if(n%3==0){
            n /= 3;
            three++;
        }
        else if(n%2==0){
            n /= 2;
            two++;
        }
        else{
            cout << -1 << endl;
            return;
        }
    }
    if(three<two){
        cout << -1 << endl;
        return;
    }
    else{
        moves=sixes+((three-two)*2);
        cout << moves << endl;
    }



}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}