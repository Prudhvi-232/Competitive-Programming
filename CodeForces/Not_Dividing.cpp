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
        for(int i=0;i<n;i++){
            if(a[i]==1&&i==0){
                a[i]=2;
            }
            else if(a[i]==1&&i<n-1&&a[i-1]!=2){
                a[i]=2;
            }
            else if(a[i]==1&&i<n-1&&a[i-1]==2){
                a[i]=3;
            }
            else if(i>0&&a[i]%a[i-1]==0){
                a[i]=a[i]+1;
            }
        }
        for (int i = 0; i < n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}