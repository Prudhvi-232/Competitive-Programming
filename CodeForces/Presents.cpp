#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> a;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[x] = i;
    }
    for (int i = 1; i <= n;i++){
        cout << arr[i]<<" ";
    }
}
