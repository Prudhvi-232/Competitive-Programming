#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int maxlen = 1;
        int len = 1;
        for (int i = 1; i < n;i++){
            if(a[i]-a[i-1]<=k){
                len++;
                maxlen = max(maxlen, len);
            }
            else{
                len = 1;
            }
        }
        cout << n-maxlen << endl;
    }
}
