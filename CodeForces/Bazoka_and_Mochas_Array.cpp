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
        int count = 1;
        int temp = 0,ini=a[0],ene=a[n-1];
        for (int i = 0; i < n-1;i++){
            if(a[i]>a[i+1] ){
                count++;
            }
        }
        if(count==2 && ene<=ini){
            cout << "YES\n";
        }
        else if(count==1){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
