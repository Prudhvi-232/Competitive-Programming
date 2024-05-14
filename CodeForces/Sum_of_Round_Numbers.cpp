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
        int arr[1000];
        int temp = n;
        int rem;
        int j = 1, i = 0;
        int as = 1;
        while (temp > 0)
        {
            as = as*10;
            int rem = temp % as;
            if (rem != 0)
            {
                arr[i] = rem;
                i++;
            }
            temp = temp - rem;
            j++;
        }
        cout << i  << endl;
        for (int k = 0; k < i; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
