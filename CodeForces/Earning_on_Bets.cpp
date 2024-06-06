#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
long long findLCM(const vector<long long> &arr)
{
    long long result = arr[0];
    for (size_t i = 1; i < arr.size(); i++)
    {
        result = lcm(result, arr[i]);
        if (result == 0)
        {
            return 0;
        }
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long result = findLCM(a);
        long long sum = 0;
        for (int i = 0; i < n;i++){
            sum += result/a[i]  ;
        }
        if(sum<result){
                for (int i = 0; i < n;i++){
                cout << result / a[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
