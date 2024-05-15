#include <bits/stdc++.h>
using namespace std;

int maci(int arr[], int n)
{
    int maxIncrease = 1;
    int currentIncrease = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            currentIncrease++;
        }
        else
        {
            currentIncrease = 1;
        }
        if (currentIncrease > maxIncrease)
        {
            maxIncrease = currentIncrease;
        }
    }
    return maxIncrease;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int nn = maci(a, n);
    cout << nn;
}
