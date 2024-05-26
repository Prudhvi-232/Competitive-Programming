#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    long long sum = 0;
    for (int i = 0; i <= ((1<<n)-1);i++){
        for (int j = 0; j < n;j++){
            if(i&(1<<j)){
                sum += a[j];
            }
            else{
                sum -= a[j];
            }
        }
        if(sum%360==0){
            flag = 1;
            break;
        }
        sum = 0;
    }
    if(flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}
