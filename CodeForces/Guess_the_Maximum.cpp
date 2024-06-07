// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int ma = INT_MAX;
//         for (int i = 1; i < n; i++)
//         {
//             ma = min(ma,max(a[i], a[i - 1]));
//         }
//         cout << ma - 1 << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p,k;
        cin>>p;
        int cur=INT_MAX;
        for(int i=1;i<n;i++){
            cin>>k;
                cur=min(cur,max(k,p)-1);
            p=k;
        }
       cout<<cur<<endl;
                
    }
    return 0;
}