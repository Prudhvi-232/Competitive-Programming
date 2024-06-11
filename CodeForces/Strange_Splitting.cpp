#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        int aa;
        int minb = INT_MAX, maxb = 0, minr = INT_MAX, maxr = 0;
        for (int i = 0; i < n-1; i++)
        {
            int dif1 = a[i] - a[0];
            int dif = a[n - 1] - a[i + 1];
            if(dif1!=dif){
                flag = 1;
                aa = i;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
            for (int i = 0; i < n;i++){
                if(i<=aa)cout << "R";
                else cout<<"B";
            }
            cout << endl;
        }
        else{
            cout << "NO\n";
        }
    }
}
