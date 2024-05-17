#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7;i++){
        cin >> arr[i];
    }
    int x = 0;
    while (n > 0)
    {
        if(x==7){
            x = 0;
        }
        n = n - arr[x];
        x++;
    }
    cout << x;
}
