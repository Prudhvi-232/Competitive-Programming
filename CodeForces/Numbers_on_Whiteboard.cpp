#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int i = 0;
        cout << 2 << endl;
        if(n==2){
            cout << 1 << " " << 2 << endl;
        }
        else if(n==3){
            cout << 3 << " " << 2 << endl;
            cout << 3 << " " << 1 << endl;
        }
        else
            while(i<n-2){
            cout << n - i << " " << n - (i + 2) << endl;
            if(i==0){
                cout << n - 1 << " " << n - 1 << endl;
            }
            i++;
            }
        }
    }

